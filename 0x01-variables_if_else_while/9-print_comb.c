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
	int d = 57;

	for (a = 48; a <= 56; a++)
	{
		putchar(a);
		putchar(b);
		putchar(c);
	}
	putchar(d);

	return (0);
}
