#include "main.h"

/**
 * main - entry point
 *
 * description: prints the alphabet in lowercase followed by new line
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}
