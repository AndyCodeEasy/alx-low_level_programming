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
	int count = 0;

	for (a = 48; a <= 55; a++)
	{
		for (b = a + 1; b <= 56; b++)
		{
			for (c = b + 1; c <= 57; c++)
			{
				if (count > 0)
				{
					putchar(44);
					putchar(32);
				}
				putchar(a);
				putchar(b);
				putchar(c);

				count++;
			}
		}
	}
	putchar('\n');
	return (0);
}
