#include "main.h"

/**
 * print_last_digit - function that prints the
 * last digit of a number.
 *
 * @r: takes r as an argument
 * and return the last nm
 * Return: the last digit of a number
 */

int print_last_digit(int r)
{
	int last_digit;

	if (r < 0)
		last_digit = -1 * (r % 10);
	else
		last_digit = r % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
