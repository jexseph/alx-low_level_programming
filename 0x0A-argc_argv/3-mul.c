#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the multiplication of two integers
* @argc: argument count
* @argv: argument vector
* Return: 0 if it works, 1 if there is an ERROR
*/
int main(int argc, char *argv[])
{

	int i;
	int j;
	int result;

	if (argc != 3)

	{

		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);

	j = atoi(argv[2]);

	result = i * j;

	printf("%i\n", result);

	return (0);
}
