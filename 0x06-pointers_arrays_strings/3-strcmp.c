#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 0 if the stings are the same, else return another number
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, p = 0;

	while (p == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		p = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (p);
}
