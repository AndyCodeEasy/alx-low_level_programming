#include <stdio.h>

/**
 * main - Entry point
 *
 * description: prints possible different combinations of three digits
 *
 * Return: 0 always
 */

int main(void)
{
	int a, b, c;

	for (a = 48; a <= 55; a++)
	{
		for (b = a + 1; b <= 56; b++)
		{
			for (c = b + 1; c <= 57; c++)
			{
			if (a < b && b < c)
			{
				putchar(a);
				putchar(b);
				putchar(c);
			}
			}
			if ((a <= 55 && b <= 56 && c <= 57))
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
