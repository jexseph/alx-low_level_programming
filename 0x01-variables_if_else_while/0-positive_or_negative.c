#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-print random number and states whether is positive, negative or zero.
 *
 * Return:0 when sucessful.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is postive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}

