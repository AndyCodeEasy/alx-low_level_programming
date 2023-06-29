#include "main.h"

/**
 * *_strncat - concatenates two strings using n bytes from src
 * @dest: pointer for a char
 * @src: another pointer for a char
 * @n: number of bytes used from src
 * Return: value of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		if(n > 0)
		{
			dest[a] = src[b];
			a++;
			b++;
			n--;
		}
	}
	dest[a] = '\0';
	return (dest);
}
