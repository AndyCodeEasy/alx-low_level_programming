#include <stdio.h>

/**
 * main - Entry point
 *
 * description: prints hexadecimals using putchar
 *
 * Return: 0 Always
 */

int main(void)
{
	int a = 48;
	
	while (a <= 70)
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
