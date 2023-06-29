#include "main.h"

/**
 * *_strcat - function to concatenate strings
 * @dest: pointer to a char
 * @src: pointer to another char
 * Return: value of dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return dest;
}
