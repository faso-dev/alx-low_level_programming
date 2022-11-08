#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - prints multiplies two numbers.
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 if success
*/
int main(int argc, char *argv[])
{
	int product;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
