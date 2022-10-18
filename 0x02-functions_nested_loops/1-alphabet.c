#include "main.h"

/**
 * main - Entry point
 * prints giver character
 * Return: Allways 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch='a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	return (0);
}
