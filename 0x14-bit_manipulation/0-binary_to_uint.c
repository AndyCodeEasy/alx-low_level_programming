#include "main.h"

/**
 * binary to unit - converts from binary to unsigned int
 * @b: string containing binary
 * Return: converted number or 0 if more one or more chars
 * in the string b that is not 0 or 1, or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int i, base_two;

	if (!b)
		return (0);

	uint = 0;

	for (i = 0; b[i] != '\0'; i++)
		;

	for (i--, base_two = 1; i >= 0; i--, base_two *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] & 1)
		{
			uint += base_two;
		}
	}
	return (uint);
}

