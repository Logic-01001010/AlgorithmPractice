#include <stdio.h>


void getBin(int n)
{
	if( n < 2 )
		printf("%d", n);
	else
	{
		getBin(n / 2);
		printf("%d", n % 2);
	}

}

int main(void)
{

	int input, xor;

	printf("input: ");
	scanf("%d", &input);

	printf("xor: ");
	scanf("%d", &xor);


	printf("\n\n");


	printf("input(%d): ", input);
	getBin(input);

	printf("\n\n");

	printf("xor(%d): ", xor);
	getBin(xor);

	printf("\n\n");


	printf("result(%d) ", input ^ xor);
	getBin(input ^ xor);

	printf("\n\n");

	printf("(%d ^ %d) result: %d\n", input, xor, input ^ xor );

	return 0;
}
