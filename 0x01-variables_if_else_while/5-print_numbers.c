#include <stdio.h>

/**
 * main - Entry point
 *
 * description: prints all single digit numbers of base 10
 *
 * Return: 0 Success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%i", i);
	}
	putchar('\n');

	return (0);
}