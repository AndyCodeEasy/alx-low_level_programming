#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates array of chars and initializes
 * with a specific char
 * @c: char
 * Return: pointer to array, null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return NULL;
	else
	{
		for (i = 0; i < size; i++)
			arr[i] = c;
	}
	return arr;
}
