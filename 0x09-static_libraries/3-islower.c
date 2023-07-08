#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: character to check
 *
 * Return: 1 if lowercase, 0 if it isn't
 */

int _islower(int c)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (c == a)
			return (1);
	}
	return (0);
}
