#include "main.h"
/**
 * print_alphabet_x10 - function to print lowercase 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char lowercase, i;

	for (i = 0; i <= 10; i++)
	{
		for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		{
			_putchar(lowercase);
		}
		_putchar('\n');
	}
}

