#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *p;
	int i, len;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
		;
	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = str[i];
	p[i] = '\0';
	return (p);
}
