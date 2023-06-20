#include "main.h"

/**
 * print_alphabet_x10: print 10 times the alphabet, in lowercase, followed by a new line
 */

void print_alphabet_x10(void)
{
	int b;

	for (b = 1; b <= 10; b++)
	{
		char a;

		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
