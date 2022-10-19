#include "main.h"

/**
 * print_last_digit - Entry point
 * prints the last digit of the given number
 * @n: the int n
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int digit;
	digit = n % 10;
	_putchar(digit + '0');
	return (digit);
}
