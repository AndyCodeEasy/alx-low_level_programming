#include <stdio.h>

/**
 * main - entry point
 * description: prints the first 50 Fibonacci numbers
 * Return: always 0
 */

int main(void)
{
	int a;
	long int fib[50];

	fib[0] = 1;
	fib[1] = 2;

	for (a = 2; a < 50; a++)
	{
		fib[a] = fib[a - 1] + fib[a - 2];
	}
	for (a = 0; a < 50; a++)
	{
		printf("%ld", fib[a]);
		if (a != 49)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
