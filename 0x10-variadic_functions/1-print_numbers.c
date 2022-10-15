#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - function that prints numbers
  * @separator: sepearator args
  * @n: number of args
  *
  * Return: number
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;


	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
		{
			printf("%d", va_arg(args, int));
		}
		else if (separator && i == 0)
		{
			printf("%d", va_arg(args, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(args, int));
		}
	}
	va_end(args);

	printf("\n");
}
