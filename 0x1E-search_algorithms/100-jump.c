#include "search_algos.h"
#include <math.h>

/**
 * min - searches for min integer
 * @a: first integer
 * @b: second integer
 * 
 * Return: Always EXIT_SUCCESS
 */

int min(int a, int b)
{
	if (b > a)
		return (a);
	return (b);
}

/**
 * jump_search - searches for a value in an array of integers
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for
 *
 * Return: Always EXIT_SUCCESS
 */

int jump_search(int *array, size_t size, int value)
{
	int step, prev;

	if (array == NULL)
		return (-1);

	step = sqrt(size);

	prev = 0;

	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n",prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= (int)size)
			return (-1);
	}

	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n",prev, array[prev]);
		prev++;
		if (prev == min(step, size))
			return (-1);
	}

	if (array[prev] == value)
		return (prev);
	return (-1);
}
