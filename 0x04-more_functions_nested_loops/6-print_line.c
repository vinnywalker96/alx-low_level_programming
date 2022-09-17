#include "main.h"

/**
 * print_line - draw a straight line using _
 * @n: the number of character to be printed
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}

	}
	_putchar('\n');

}

