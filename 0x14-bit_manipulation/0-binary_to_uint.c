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

	if (!b)
		return (0);

	uint = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if(b[i] != '0' || b[i] != '1')
			return (0);
		else
		{
			uint = uint << 1;
			if (b[i] == '1')
				uint = uint | 1;
		}
	}
	return (uint);
}

