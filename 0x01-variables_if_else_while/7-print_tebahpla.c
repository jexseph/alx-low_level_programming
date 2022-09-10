#include <stdio.h>
/**
 * main - entry point
 *print lowercase alphabeth
* Return: 0 when successful
*/
int main(void)
{
char a;
for (a = 122; a >= 97; a--)
{
putchar(a);
}
putchar('\n');
return (0);
}
