#include "main.h"

/**
 * reverse_array - prints array in reverse
 * @n: number of elements in array
 * @a: array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, b;

	for (1 = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			b = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = b;
		}
	}
}
