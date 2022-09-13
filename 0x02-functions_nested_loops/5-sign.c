#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: the input of the function
 *
 * Return: returns 1 and prints +
 * if n is greater than 0
 * print - if n is equal to 0
 * 0r print - if less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}

