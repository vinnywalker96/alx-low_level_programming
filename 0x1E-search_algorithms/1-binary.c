#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for
 *
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
	int left, right, i;

	if (array == NULL)
	{
		return (-1);
	}

	left = 0;
	right = size - 1;
	while (left < right)
	{
		int mid = left + (right - left) / 2;

		printf("Search in array: ");

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
			{
				printf(",");
				printf(" ");
			}

		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
