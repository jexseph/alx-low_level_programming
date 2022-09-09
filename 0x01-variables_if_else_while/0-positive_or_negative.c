#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-print random number and states whether positive, negative or zero.
 *
 * Return:0 when sucessful.
 */
int main(void)
{
	int n;

	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}

