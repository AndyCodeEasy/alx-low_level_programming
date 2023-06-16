#include <stdio.h>

/**
 * main - Entry point
 *
 * description: prints all possible combinations of two-digit numbers
 *
 * Return: 0 always
 */

int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 54; a++)
	{
		for (b = a + 1; b <= 55; b++)
		{
			for (c = b + 1; b <= 56; c++)
			{
				for (d = c + 1; d <= 57; d++)
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
