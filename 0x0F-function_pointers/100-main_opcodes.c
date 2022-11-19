#include "stdlib.h"
#include "stdio.h"

/**
* main - prints the opcodes of its own main function.
* @argc: argument counter
* @argv: argument vector
* Return: Always 0 (Sucess)
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
