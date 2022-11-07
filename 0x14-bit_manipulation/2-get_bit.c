#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: number input
 * @index: index starting from 0, of the bit we want to get
 *
 * Return: -1 if error or bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int val;

	if (index > 64)
		return (-1);

	val = n >> index;


	return (val & 1);
}
