#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Allways 0 (Sucess)
 */
int main(void)
{
	long int i, j, k, next_term;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		next_term = j + k;
		j = k;
		k = next_term;
	}

	return (0);
}
