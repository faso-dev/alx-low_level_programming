#include "main.h"

/**
 * print_sign - Entry point
 * prints the sign of the given n
 * @n: the int n
 * Return: 1 for true and 0 for false
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	_putchar('-');
	return (-1);
}
