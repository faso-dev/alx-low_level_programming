#include "stdio.h"

/**
* main - prints its name, followed by a new line.
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 if success
*/
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
