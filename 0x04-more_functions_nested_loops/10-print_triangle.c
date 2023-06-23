#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: number of lines printed
 * Return: nothing
 */

void print_triangle(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 1; b < a; b++)
			_putchar(' ');
		for (b--; b < size; b++)
			_putchar('#');
		if (a < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
