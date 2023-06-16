#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * description: prints the last digit of n
 *
 * Return 0 Always
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (a > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, a);
	if (a == 0)
		printf("Last digit of %i is %i and is 0\n", n, a);
	if (a < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, a);

	return (0);
}
