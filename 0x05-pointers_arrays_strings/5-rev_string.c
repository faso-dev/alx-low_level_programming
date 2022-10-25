#include "main.h"

/**
 * rev_string - main entry
 * reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char char_tmp;
	int i, len, len_tmp;

	len = 0;

	while (s[len] != '\0')
		len++;

	len_tmp = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		char_tmp = s[i];
		s[i] = s[len_tmp];
		s[len_tmp--] = char_tmp;
	}
}
