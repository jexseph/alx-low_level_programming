#include "main.h"
/**
*print_alphabet - function to entry point
*
*Return: 0
*/
void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		-putchar(lowercase);
	}
-putchar('\n');
}

