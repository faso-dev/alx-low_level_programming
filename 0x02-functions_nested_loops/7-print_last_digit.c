#include "main.h"

/**
 * print_last_digit - Entry point
 * prints the last digit of the given number
 * @n: the int n
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	_putchar(r + '0');
	return (r);
}
