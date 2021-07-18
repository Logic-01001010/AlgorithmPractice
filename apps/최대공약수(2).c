#include <stdio.h>

#define swap(x, y, temp) ( temp = x, x = y, y = temp )

int gcd(int p, int q)
{
    if( p < q )
    {
        int temp;
        swap(p, q, temp);
    }

    if( q == 0 )
        return p;
    else   
        return gcd(q, p - q);
}

int main(void)
{
    int result = gcd(250, 30);

    fprintf(stdout, "%d", result);

    return 0;
}