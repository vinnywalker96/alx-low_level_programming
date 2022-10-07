#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * *_strdup - function that returns a
  * pointer to a newly allocated space
  * @str: str input
  * Return: copy of str
  */

char *_strdup(char *str)
{
	char *dest;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	dest = malloc(sizeof(char) * strlen(str));

	for (i = 0; i < sizeof(str); i++)
	{
		dest[i] = str[i];
	}

	return (dest);
}
