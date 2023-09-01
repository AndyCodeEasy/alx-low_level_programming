#include "main.h"

/*
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n
 * @index: index of the bit
 * Return: 1 if successful, -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (!n)
		return (-1);
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	m = 1 << index;
	*n = (*n | m);
	
	return (1);
}
