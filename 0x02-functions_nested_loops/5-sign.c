#include "main.h"

/**
 * _isalpha - Entry point
 * check if a given char is an alpha
 * @n: the int n
 * Return: 1 for true and 0 for false
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else
	{
		_putchar('-');
		return (-1);
	}
}
