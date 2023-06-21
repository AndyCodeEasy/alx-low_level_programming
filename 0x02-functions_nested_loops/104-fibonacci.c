#include <stdio.h>

/**
 * main - Entry point
 * description: prints the first 98 Fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	long int a, b, c;
	int i;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);

	for (i = 0; i <= 98; i++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
