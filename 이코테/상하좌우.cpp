#include <iostream>
#include <string> // getline()
using namespace std;

int main(void)
{

    int N;
    string plans;
    int x = 1, y = 1;


    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};

    char moveTypes[4] = {'L', 'R', 'U', 'D'};

    cin>>N;

    cin.ignore(); // 버퍼 지우기
    getline(cin, plans);

    for(int i=0; i<plans.size(); i++)
    {
        char plan = plans[i];

    int nx = 0, ny = 0;

        for(int j=0; j<4; j++)
        {
            if(plan == moveTypes[j])
            {
                nx = x + dx[j];
                ny = y + dy[j];
            }
        }

    if( nx < 1 || ny < 1 || nx > N || ny > N) continue;

    x = nx;
    y = ny;
    }


    cout << x << ' ' << y << endl;



    return 0;
}