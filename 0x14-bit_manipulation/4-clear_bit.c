#include "main.h"

/*
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @index: usigned int.
 * @n: unsigned long int.
 * Return: 1 if successful, -1 if not.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (!n)
		return (-1);
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
