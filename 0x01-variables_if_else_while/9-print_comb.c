#include <stdio.h>
/**
 * main - Entry point for my codes
 * display: digits combinations
 * Return : 0 when sucessful
 * this programm prints 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 */
int main(void)

{
int d;
for (d = 48; d <= 57; d++)
{
putchar(d);
if (d != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
