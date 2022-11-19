#include "3-calc.h"

/**
* get_op_func - get the operator function
* @s: operator passed as argument to the program
* Return: Always 0 (Success)
*/
int (*get_op_func(char *s))(int, int)
{
	op_t operators[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (operators[i].op)
	{
		if (*(operators[i].op) == *s && *(s + 1) == '\0')
			return (operators[i].f);
		i++;
	}
	return (0);
}
