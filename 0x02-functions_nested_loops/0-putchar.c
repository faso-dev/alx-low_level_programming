#include <unistd.h>

/**
 * _putchar: Entry point
 * prints giver character
 * Returns: Allways 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
