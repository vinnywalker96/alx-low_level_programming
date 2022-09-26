#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int count;

	while (*s)
	{
		count = *s++;
		if (count == c)
		{
			return (s - 1);
		}
		if (count == 0)
		{
			return (NULL);
		}

	}
	return (s);
}
