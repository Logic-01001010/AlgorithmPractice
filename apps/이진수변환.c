#include <stdio.h>

int printBinary(int n) // 6, 3, 1
{
    if( n < 2 )
        printf("%d", n); // *(1)
    else
    {
        printBinary( n / 2 ); // (6 / 2 = 3), (3 / 2 = 1)
        printf("%d", n % 2); // *(6 % 2 = 0), *(3 % 2 = 1)
    }
}

int main(void)
{
    printBinary(6);

    return 0;
}