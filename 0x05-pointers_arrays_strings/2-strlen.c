#include "main.h"

/**
*_strlen - returns the length of a string
*@s:a pointer that indicates length of string
*Return: int c
*/
int _strlen(char *s)
{
	int c = 0;

	for (c = 0; *s != '\0'; s++)
	{
		c++;
	}
	return (c);
}
