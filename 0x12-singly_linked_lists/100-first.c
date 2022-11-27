#include "stdio.h"

/**
* first_func - prints before the main function is executed.
*
* Return: Always 0.
*/
void first_func(void) __attribute__ ((constructor))

void first_func(void)
{
	char *m;

	m = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", m)
}
