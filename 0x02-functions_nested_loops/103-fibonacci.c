#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * prints dibonacci by the two sequencesss
 * Return: Allways 0 (Sucess)
 */
int main(void)
{
	int i;
	unsigned long int j, k, next_term, total;

	j = 1;
	k = 2;
	total = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j != 4000000 && (j % 2) == 0)
			total += 1;
		next_term = j + k;
		j = k;
		k = next_term;
	}

	return (0);
}
