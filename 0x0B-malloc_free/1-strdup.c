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
	int len = strlen(str);
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	dest = (char *)malloc((len + 1) * sizeof(char));

	for (i = 0; i <= len; i++)
	{
		dest[i] = str[i];
	}
	return (dest);
}
