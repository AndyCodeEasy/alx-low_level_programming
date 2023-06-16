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
	int a, b;
	int count = 0;

	for (a = 48; a <= 57; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			if (a != b)
			{
				if (count > 0)
				{
					putchar(44);
					putchar(32);
				}
				putchar(a / 10 + 48);
				putchar(a % 10 + 48);
				putchar(32);
				putchar(b / 10 + 48);
				putchar(b % 10 + 48);

				count++;
			}
		}
	}
	putchar('\n');
	return (0);
}
