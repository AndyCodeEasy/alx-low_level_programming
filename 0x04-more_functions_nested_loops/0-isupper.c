#include "main.h"

/**
 * _isupper - checks for uppercase characters
 *
 * @c: character to check
 *
 * Return: 1 if uppercase, 0 if not
 */

int _isupper(int c)
{
	char a;
	
	for (a = 'A'; a <= 'Z'; a++)
	{
		if (c == a)
			return (1);
	}
	_putchar('\n');
	return (0);
}
