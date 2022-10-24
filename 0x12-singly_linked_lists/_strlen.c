#include "lists.h"

/**
 * _strlen - counts number of character
 * @s: takes str as argument
 * Return: integer
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len = len + 1;
		s = s + 1;
	}

	return (len);
}


/**
 * _strdup - copies str to new location
 * @str: input str
 * Return: new copy
 */

char *_strdup(char *str)
{
	int len;
	char *new, saved;

	len = _strlen(str);

	new = malloc(sizeof(len + 1) * sizeof(char));

	if (new == NULL)
		return (NULL);

	saved = new;

	while (*str != '\0')
	{
		*new = *str;
		new = new + 1;
		str = str + 1;
	}

	new = '\0';

	return (saved);
