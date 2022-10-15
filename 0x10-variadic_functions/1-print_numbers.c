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
	unsigned int i, result;

	if (separator == NULL)
	{
		printf(" \n");
	
	}


	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(args, int);
		printf("%d %c", result, *separator);
	}
	printf("\n");

	va_end(args);
}
