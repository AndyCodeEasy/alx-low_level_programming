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

	printf("size of char: %zu bytes\n", sizeof(a));
	printf("size of int: %zu bytes\n", sizeof(b));
	printf("size of float: %zu bytes\n", sizeof(c));
	printf("size of double: %zu bytes\n", sizeof(d));
	printf("size of short: %zu bytes\n", sizeof(e));
	printf("size of long: %zu bytes\n", sizeof(f));
	printf(("size of long long: %zu bytes\n", sizeof(g));
	return (0);
}
