#include "main.h"

/**
 * description: prints the alphabet, in lowercase, followed by a new line.
 *
 * print_alphabet: prints the alphabet, in lowercase, followed by a new line
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
