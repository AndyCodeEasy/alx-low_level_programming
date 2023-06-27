#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string src points to
 * @dest: destination
 * @src: source
 * Return: the point to dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
