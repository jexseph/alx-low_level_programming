#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: string to append to
* @src: string to add
*
* Return: a pointer to the resulting string
*/
char *_strcat(char *dest, char *src)
{
int c, i;
c = 0;
i = 0;
while (dest[c] != '\0')
c++;
while (src[i] != '\0')
{
dest[c] = src[i];
i++;
c++;
}
dest[c] = '\0';
return (dest);
}
