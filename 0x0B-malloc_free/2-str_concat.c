#include "main.h"

/**
* _str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: pointer to the concatenated string
*/
char *_str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;
	p = malloc((len1 + len2 + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (j = 0; j < len2; j++)
		p[i + j] = s2[j];
	p[i + j] = '\0';
	return (p);
}
