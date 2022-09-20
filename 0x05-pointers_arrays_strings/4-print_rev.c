# include "main.h"

/**
* print_rev - prints string in reverse order
* @s:parameter indicating string to reverse
* Return: nothing
*/
void print_rev(char *s)
{
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		a++;
	}
	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
