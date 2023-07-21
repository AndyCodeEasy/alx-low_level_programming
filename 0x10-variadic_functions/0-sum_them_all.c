#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	int total = 0;
	
	if (n == 0)
		return (0);

	va_start(args, n);

	for(i = 0; i < n; i++)
		total += va_arg(args, int);
	
	va_end(args);
	return (total);
}
