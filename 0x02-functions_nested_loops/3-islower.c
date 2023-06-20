#include "main.h"

/**
 * main - check the code
 *
 * islower: checks for lowercase character
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
