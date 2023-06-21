#include <stdio.h>

/**
 * main - Entry point
 * description: prints the first 98 Fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	unsigned long int a, b, c;
	unsigned int i;

	a = 1;
	b = 2;
	printf("%lu, %lu", a, b);

	for (i = 0; i <= 96; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
