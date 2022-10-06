#include "main.h"
#include <ctype.h>

/**
 * _isdigit - function that check if character
 * is a digit
 * a digit and returns 0 or 1
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
