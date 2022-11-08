#include "stdio.h"

/**
* main - prints multiplies two numbers.
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 if success
*/
int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	k = i * j;
	printf("%d\n", k);
	return (0);
}
