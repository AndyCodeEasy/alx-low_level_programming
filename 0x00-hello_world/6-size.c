#include <stdio.h>
/**
 * main - entry point
 * description: prints the size of types on the computer
 * Return: Always 0
 */

int main(void)
{
	char a;
	int b;
	float c;
	double d;
	short e;
	long f;
	long long g;

	printf("size of char: %lu bytes\n", sizeof(a));
	printf("size of int: %lu bytes\n", sizeof(b));
	printf("size of float: %lu bytes\n", sizeof(c));
	printf("size of double: %lu bytes\n", sizeof(d));
	printf("size of short: %lu bytes\n", sizeof(e));
	printf("size of long: %lu bytes\n", sizeof(f));
	printf(("size of long long: %lu bytes\n", sizeof(g));
	return (0);
}
