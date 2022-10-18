#include "main.h"

/**
 * _isalpha - Entry point
 * check if a given char is an alpha
 * @c: the character to be checked
 * Return: 1 for true and 0 for false
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	} else
	{
		return (0);
	}

}
