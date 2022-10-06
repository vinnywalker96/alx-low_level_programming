#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: checks input of function
 *
 * Return: returns 1 if `c` is lowercase
 *    or uppercase or returns 0
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
