#include "main.h"

/**
* argstostr - concatenates all the arguments of your program
* @ac: number of arguments
* @av: array of arguments
* Return: pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, k, l;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0, l = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			l++;
		l++;
	}
	l++;
	p = malloc(l * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			p[k] = av[i][j];
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
}
