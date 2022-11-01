#include "stdio.h"

/**
 * print_diagsums - print in the terminal the sum of the two diagonals
 * @a: array
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 += a[i * (size + 1)];
	for (j = 0; j < size; j++)
		sum2 += a[(j + 1) * (size - 1)];
	printf("%d, %d\n", sum1, sum2);
}
