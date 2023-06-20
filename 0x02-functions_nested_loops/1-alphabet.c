#include "main.h"

/**
 * print_alphabet - entry point
 *
 * return: nothing
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
}
