#include "main.h"

/*
 * binary_to_uint - converts binary to unsigned int
 * @b: string of 0 and 1 chars
 * Return: converted number or 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0, bit_pos = 1;

	if (b == NULL)
		return(0);
	for (i = 0; b[i] != '\0'; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return(0);
		else
		{
			result += (b[i] - '0') * bit_pos;
			bit_pos *= 2;
		}
	}
	return(result);
}
