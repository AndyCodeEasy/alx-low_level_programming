#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints possible combinations of single-digits
 *
 * Return: 0 Always
 */

int main(void)
{
	int a;
	int b = 44;
	int c = 32;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		putchar(b);
		putchar(c);
	}
	
	return (0);
}
