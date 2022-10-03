#ifndef MAIN_H
#define MAIN_H

#include  <stdlib.h>
#include  <stdio.h>

int _putchar(char);
char *create_array(unsigned int size,char c);
char *strdup(char *str);
int **alloc_grid(int width, int height);
char *str_concat(chr *s1, char *s2);
void free_grid(int **grid, int height);

#endif
