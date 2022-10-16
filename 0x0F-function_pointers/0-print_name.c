#include "function_pointers.h"
#include <stdio.h>

/**
  * print_name - function that prints a name.
  * @name: name input
  * @f: pointer function
  */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}

	f(name);
}
