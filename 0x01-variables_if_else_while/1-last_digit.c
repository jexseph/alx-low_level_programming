#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point for my codes
 * Author:jexseph
 * Date:09-09-2022
 * Details:print random numbers whether +ve ,zero and -ve results
 * Return : 0 Always success
*/
int main(void)
{
	int n;

	int 1j

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	1j = n % 10;
	if (1j > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, 1j);
	if (1j == 0)
		printf("Last digit of %d is %d  and is 0\n", n, n 1j);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n 1j);
	return (0);
}
