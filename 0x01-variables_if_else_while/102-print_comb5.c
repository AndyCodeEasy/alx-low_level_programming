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
	int i, j;
	int a, b, c, d;

	for (i = 0; i <= 99; i++)
	{
		a = i / 10;
		b = i % 10;

		for (j = 0; j <= 99; j++)
		{
			c = j / 10;
			d = j % 10;

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
