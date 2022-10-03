#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory.
* @str: string.
*
* Return: pointer of an array of chars
*/
char *_strdup(char *str)
{
	char *cpy;
	unsigned int i;
	unsigned int j;


	if (str == NULL)

		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	cpy = (char *)malloc(sizeof(char) * (i + 1));

	if (cpy == NULL)

		return (NULL);

	for (j = 0; j <= i; j++)
	{
		cpy[j] = str[j];
	}
	return (cpy);

}
