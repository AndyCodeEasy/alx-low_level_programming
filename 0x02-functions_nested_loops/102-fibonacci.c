#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * separated by comma and a space
 */

int main(void)
{
	int fib[50];
	int a;

	fib[0] = 1;
	fib[1] = 2;

	for (a = 2; a < 50; a++)
	{
		fib[a] = fib[a-1] + fib[a-2];
	}
	for (a = 0; a < 50; a++)
	{
		printf("%d", fib[a]);

		if (a != 49)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
