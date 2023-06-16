#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints lowercase and uppercase letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	for (b = 65; b <= 90; b++)
	{
		putchar(b);
	}
	putchar('\n');

	return (0);
}
