#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * sum_them_all - function that adds all numbers
  * @n: number input
  *
  *
  * Return: number
  */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);

	}

	if (n == 0)
	{
		return (0);
	}

	va_end(ptr);

	return (sum);

}

