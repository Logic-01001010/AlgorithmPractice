#include <stdio.h>

#define m 6
#define n 8

#define true 1
#define false 0

// 0: way
// 1: wall
// 2: path
// 3: blocked

// 9: flag


int flag[2] = {-1, -1};


int maze[m][n] = {
    {1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 1, 1, 1, 0, 1},
    {1, 1, 0, 0, 0, 0, 0, 1},
    {1, 1, 0, 1, 0, 1, 1, 1},
    {1, 0, 0, 1, 0, 0, 9, 1},
    {1, 1, 1, 1, 1, 1, 1, 1}
};


void printMaze()
{
    int i, j;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            fprintf(stdout, "%d ", maze[i][j]);   
        }
        fprintf(stdout, "\n");
    }

    fprintf(stdout, "\n");

}

int findWay(int x, int y)
{

    if( maze[x][y] == 9 ) // found flag!
    {   
        flag[0] = x;
        flag[1] = y;
        return true;
    }

    else if( maze[x][y] != 0 ) // not a way...
        return false;

    else // if maze[x][y] is a way
    {

        maze[x][y] = 2; // this way is path for bit a time.
        
        if(findWay(x+1, y) || findWay(x-1, y) || findWay(x, y+1) || findWay(x, y-1) )
            return true;
        
        maze[x][y] = 3; // blocked way :(
        return false;

    }

    

}

int main(void)
{

    printMaze();

    findWay(1, 1);

    printMaze();
    
    if(flag[0] != -1)
        fprintf(stdout, "Flag postition is X: %d, Y: %d.\n", flag[0], flag[1]);

    return 0;
}