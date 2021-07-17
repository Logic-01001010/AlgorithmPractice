#include <stdio.h>

int gcd(int p, int q)
{
    if( q == 0 )
        return p;
    else   
        return gcd(q, p % q);
}

int main(void)
{
    int result = gcd(6, 12);

    fprintf(stdout, "%d", result);

    return 0;
}