#include "stdlib.h"
#include "stdio.h"
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector for values
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j, mul;

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
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
