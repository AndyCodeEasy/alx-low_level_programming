#include "main.h"

/**
 * print_line - prints line using _
 * @n: number of times _ is printed
 * Return: nothing
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}	
