#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * *create_array - Function that creates array of chars
  * @size: size of the array
  * @c: array
  * Return: pointer
  */

char *create_array(unsigned int size, char c)
{
	char *dest;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	if (c == 0)
	{
		return (NULL);
	}

	dest = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		dest[i] = c;
	}

	return (dest);

}
