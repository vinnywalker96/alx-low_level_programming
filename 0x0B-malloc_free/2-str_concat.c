#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: input to string 1
 * @s2: input to string 2
 *
 * Return: NULL on faliure
*/

char *str_concat(char *s1, char *s2)
{
	char *dest;
	int i = 0, j = 0, res, temp;
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}
	 dest = malloc(((len1 + 1) * sizeof(char)) + ((len2 + 1) * sizeof(char)));

	for (res = 0; s1[res] != '\0'; res++)
	{
		dest[res] = s1[res];

	}
	for (temp = 0; s2[temp] != '\0'; temp++)
	{
		dest[res] = s2[temp];
		res++;
	}

	

	return (dest);
}
