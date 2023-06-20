#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: the character to be checked
 * Return: 1 if a letter, 0 otherwise
 */

int _isalpha(int c)
{
	char a;
	char b;
	
	for (a = 'a'; a <= 'z'; a++)
	{
		for (b = 'A'; b <= 'Z'; b++)
		{
			if (c == a || c == b)
				return (1);
		}
	}
	return (0);
}

