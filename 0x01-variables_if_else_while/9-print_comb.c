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

	for (a = 48; a <= 56; a++)
	{
		putchar(a);
		putchar(44);
		putchar(32);
	}
	putchar(57);

	return (0);
}
