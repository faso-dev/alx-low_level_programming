#include "variadic_functions.h"

/**
* print_char - prints a char
* @arguments: input arguments
*/
void print_char(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}

/**
* print_int - prints an integer
* @arguments: input arguments
*/
void print_int(va_list arguments)
{
	printf("%d", va_arg(arguments, int));
}

/**
* print_float - prints a float
* @arguments: input arguments
*/
void print_float(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}

/**
* print_string - prints a string
* @arguments: input arguments
*/
void print_string(va_list arguments)
{
	char *args = va_arg(arguments, char *);

	if (args == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", args);
}

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list arguments;
	int i = 0, j = 0;
	char *separator = "";

	simbol_t symbol_map[] = {
		{'c', print_char},
		{'s', print_string},
		{'f', print_float},
		{'i', print_int}
	};

	va_start(arguments, format);
	while (format && format[i])
	{
		j = 0;
		while (symbol_map[j].all)
		{
			if (format[i] == symbol_map[j].all[0])
			{
				printf("%s", separator);
				symbol_map[j].func(arguments);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arguments);
}
