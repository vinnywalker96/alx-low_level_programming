#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - Function that print string
  * @separator: separators argument
  * @n: number of arguments
  *
  *
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);


	for (i = 0; i < n; i++)
	{
		if (!separator)
		{
			printf("%s", va_arg(args, char *));
		}
		else if (separator && i == 0)
		{
			printf("%s", va_arg(args, char *));
		}
		else
		{
			printf("%s%s", separator, va_arg(args, char *));
		}


	}

	va_end(args);
	printf("\n");


}
