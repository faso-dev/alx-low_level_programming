#include "main.h"

/**
* strtow - splits a string into words
* @str: string to split
* Return: pointer to an array of strings
*/
char **strtow(char *str)
{
	char **p;
	int i, j, k, l, m, n;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0, j = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			j++;
	}
	if (j == 0)
		return (NULL);
	p = malloc((j + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	for (k = 0, l = 0; k < j; k++, l++)
	{
		while (str[l] == ' ')
			l++;
		for (m = l; str[m] != ' ' && str[m]; m++)
			;
		p[k] = malloc((m - l + 1) * sizeof(char));
		if (p[k] == NULL)
		{
			for (n = 0; n < k; n++)
				free(p[n]);
			free(p);
			return (NULL);
		}
		for (m = 0; str[l] != ' ' && str[l]; m++, l++)
			p[k][m] = str[l];
		p[k][m] = '\0';
	}
	p[k] = NULL;
	return (p);
}
