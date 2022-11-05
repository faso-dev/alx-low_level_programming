#include "main.h"

/**
 * prime - checks if a number is prime
 * @i: number
 * @n: number
 * Return: 1 if n is prime, 0 otherwise
 */
int prime(int i, int n)
{
	if (n <= 1)
		return (0);
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime(i + 1, n));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (prime(2, n));
}
