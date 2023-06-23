#include "main.h"

/**
 * print_diagonal - print \ character on the terminal
 * @n: number of times \ is printed
 * Return: nothing
 */

void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
