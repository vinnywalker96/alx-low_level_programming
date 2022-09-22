#include "main.h"
#include <stdio.h>
/**
  * *_strncpy - function that copies a string.
  * @dest: destination string
  * @src: source string
  * @n: number of bytes of str to concatenate
  *
  * Return: a pointer to the resulting string dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (dest[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}
