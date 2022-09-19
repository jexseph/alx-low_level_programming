#include "main.h"
/**
* swap_int - swaps two integers values
* @a: first parameter integer
* @b: second parameter integer
* Return:nothing
*/
void swap_int(int *a, int *b)
{
	int t;

	t = *b;
	*b = *a;
	*a = t;
}
