#include <stdio.h>

#define N 8
#define BACKGROUND_COLOR 0
#define IMAGE_COLOR 1
#define ALREADY_COLOR 2

int grid[N][N] = {
        {1, 0, 0, 0, 0, 0, 0, 1},
        {0, 1, 1, 0, 0, 1, 0, 0},
        {1, 1, 0, 0, 1, 0, 1, 0},
        {0, 0, 0, 0, 0, 1, 0, 0},
        {0, 1, 0, 1, 0, 1, 0, 0},
        {0, 1, 0, 1, 0, 1, 0, 0},
        {1, 0, 0, 0, 1, 0, 0, 1},
        {0, 1, 1, 0, 0, 1, 1, 1},
};


int CountCells(int x, int y)
{
    if( x < 0 || x >= N || y < 0 || y >= N)
        return 0;
    
    if( grid[x][y] != IMAGE_COLOR )
        return 0;

    else
    {
        grid[x][y] = ALREADY_COLOR;
        return 1 + CountCells(x - 1, y + 1) + CountCells(x, y + 1) 
            + CountCells(x + 1, y + 1) + CountCells(x - 1, y) 
            + CountCells(x + 1, y) + CountCells(x - 1, y - 1)
            + CountCells(x, y - 1) + CountCells(x + 1, y - 1);
    }

}


int main(void)
{

    int result = CountCells(5, 3);

    printf("%d", result);

    return 0;
}