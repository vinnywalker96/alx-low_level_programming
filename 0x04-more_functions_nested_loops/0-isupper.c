#include "main.h"
#include <ctype.h>

/**
 * _isupper - check description
 * Description: checks for uppercase characters
 * @c: the input of the function
 * Return: 1 if c uppercase else return 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
