#include <stdio.h>

/**
 * main - Entry point
 * description: prints the first 98 Fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	unsigned long long int a, b, c;
	unsigned int i;

	a = 1;
	b = 2;
	printf("%llu, %llu", a, b);

	for (i = 0; i < 96; i++)
	{
		c = a + b;
		printf(", %llu", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
