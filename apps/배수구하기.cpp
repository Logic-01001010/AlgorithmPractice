#include <iostream>

using namespace std;

int main(void)
{
    int n, limit;
	
	cout<<"(n): ";
    cin>>n;    
	
	cout<<"(limit): ";
    cin>>limit;


    for(int i=n; i<limit; i++)
    {
        if( (n + i) % n == 0 )
			cout<<i<<' ';
    }

    return 0;
}
