#include "main.h"

/**
 * print_square - function that prints a square
 * @size: size of the square
 * return:0
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i <size; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar('#');

			}
			_putchar('\n');

		}
	}
	else
	{
		_putchar('\n');
	}

}

