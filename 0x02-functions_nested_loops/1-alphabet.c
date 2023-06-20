#include "main.h"

/**
 * main - entry point
 *
 * description: prints the alphabet, in lowercase, followed by a new line
 *
 * return: 0
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return (0);
}
