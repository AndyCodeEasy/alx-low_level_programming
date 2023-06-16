#include <stdio.h>
/**
 * main - Entry point
 *
 * description: prints the alphabet in lowercase
 *
 * Return: 0 Always
 */

int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
