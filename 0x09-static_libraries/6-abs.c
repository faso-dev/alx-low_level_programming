#include "main.h"

/**
 * _abs - Entry point
 * prints the absolute value of the given n
 * @n: the int n
 * Return: 1 for true and 0 for false
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
