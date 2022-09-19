#include "main.h"

/**
 * print_triangle -  a function that prints a triangle, followed by a new line.
 * @size: An input integer
 * Return: Always 0
 */

void print_triangle(int size)
{
	int i, j, count = size -1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < count)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			count--;
			_putchar('\n');
		}

	}
	else
	{
		_putchar('\n');
	}
}
