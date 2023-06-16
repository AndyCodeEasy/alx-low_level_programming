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

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
