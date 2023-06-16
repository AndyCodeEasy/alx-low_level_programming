#include <stdio.h>

/**
 * main - Entry point
 *
 * description: prints a combination of digits
 *
 * Return: 0 Always
 */

int main(void)
{
	int a, b;

	for (a = 48; a <= 56; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
		if (!(a == 56 && b == 57))
		{
			putchar(44);
			putchar(32);
		}
		}
	}
	putchar('\n');	
	return (0);
}	
