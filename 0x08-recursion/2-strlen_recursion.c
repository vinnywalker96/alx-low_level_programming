#include "main.h"

/**
 * _strlen_recursion - function that returns length of str
 * @s: string input
 * Return: c
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(++s));
	}
}

