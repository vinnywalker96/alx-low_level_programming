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
	int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	dest = malloc(sizeof(char) * sizeof(char));
	printf("%s\n", dest);

	for (i = 0; i <= strlen(str); i++)
	{
		dest[i] = str[j];
		j++;
	}
	return (dest);
}
