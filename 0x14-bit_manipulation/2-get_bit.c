#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 * Return: value of the bit or -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && (index < sizeof(unsigned long int) * 8))
		return (0);

	for (i = 0; i < sizeof(unsigned long int) * 8; n >>= 1, i++)
	{
		if (index == i)
			return (n & 1);
	}

	return (-1);
}

