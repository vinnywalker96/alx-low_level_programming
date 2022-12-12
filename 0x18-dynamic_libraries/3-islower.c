#include "main.h"
#include <ctype.h>

/**
 * _islower - function
 * Description: it checks for lowercase character
 * @c: checks input of function
 * Return:0
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
