#include "main.h"

/**
 * _islower - Entry point
 * check if a given char is lower
 * Return: 1 for true and 0 for false
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return 1;
	else
		return 0;
}
