#include <stdio.h>
/**
 * main - entry point
 * description: prints the size of types on the computer
 * Return: Always 0
 */

int main(void)
{
	printf("size of char: %zu bytes\n", sizeof(char));
	printf("size of int: %zu bytes\n", sizeof(int));
	printf("size of float: %zu bytes\n", sizeof(float));
	printf("size of double: %zu bytes\n", sizeof(double));
	printf("size of short: %zu bytes\n", sizeof(short));
	printf("size of long: %zu bytes\n", sizeof(long));
	return (0);
}
