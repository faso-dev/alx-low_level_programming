#include "main.h"

/**
 * square_root - find the natural square root
 * @i: number
 * @j: incrementor
 *
 * Return: the number found
 */
int square_root(int i, int j)
{
	if (i * i == j)
		return (i);
	else if (i * i > j)
		return (-1);
	return (square_root(i + 1, j));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	return (square_root(1, n));
}
