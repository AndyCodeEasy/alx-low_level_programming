#include <stdio.h>

/**
 * main - prints the name of the file.
 *
 * Return: Always 0.
 */

#define __BASE_FILE__

int main(void)
{
	printf("Filename is: %s\n", __BASE_FILE__);
	return 0;
}
