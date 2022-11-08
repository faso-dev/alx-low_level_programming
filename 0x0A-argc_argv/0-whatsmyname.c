#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - prints its name, followed by a new line.
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 if success
*/
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
