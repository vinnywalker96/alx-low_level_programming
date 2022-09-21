#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: An input integer
 * Return: Nothing
 */

void print_number(int n)
{
	int i = 1000000000;

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar('-');
		for (; i >= 1; i /= 10)
		{
			if (n / i != 0)
			{
				_putchar((n / i) % 10 + '0');
			}
		}
	}

}
