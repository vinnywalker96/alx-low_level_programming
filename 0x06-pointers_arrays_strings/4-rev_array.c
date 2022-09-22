#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, j, index;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		index = a[i];
		a[i] = a[j];
		a[j--] = index;
	}

}
