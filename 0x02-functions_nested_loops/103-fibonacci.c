#include <stdio.h>

/**
 * main - Entry point
 * description: prints even numbers of the fibonacci sequence
 * less than 4000000
 * Return: Always 0
 */

int main(void)
{
	long int fib[33];
	int a;
	long int sum = 0;

	fib[0] = 1;
	fib[1] = 2;

	for (a = 2; a < 33; a++)
	{
		fib[a] = fib[a - 1] + fib[a - 2];
	}
	for (a = 0; a < 33; a++)
	{
		if (fib[a] % 2 == 0)
			sum += fib[a];
	}
	printf("%ld\n", sum);
	return (0);
}
