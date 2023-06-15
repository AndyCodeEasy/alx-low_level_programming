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

	puts("size of char: %lu bytes", sizeof(a));
	puts("size of int: %lu bytes", sizeof(b));
	puts("size of float: %lu bytes", sizeof(c));
	puts("size of double: %lu bytes", sizeof(d));
	puts("size of short: %lu bytes", sizeof(e));
	puts("size of long: %lu bytes", sizeof(f));
	puts("size of long long: %lu bytes", sizeof(g));
	return (0);
}
