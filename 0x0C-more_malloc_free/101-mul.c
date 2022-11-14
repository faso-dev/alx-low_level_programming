#include "stdlib.h"
#include "stdio.h"

/**
 * mul - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector for values
 *
 * Return: Always 0 (Success)
 */
int mul(int argc, char *argv[])
{
	int i, j, product;

	if (argc == 3)
	{
		for (i = 0; argv[1][i] != '\0'; i++)
		{
			if (argv[1][i] < 48 || argv[1][i] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
		for (j = 0; argv[2][j] != '\0'; j++)
		{
			if (argv[2][j] < 48 || argv[2][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
