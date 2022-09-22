#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string of the argument
 */

void puts2(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	len -= 1;
	for (i = 0; i <= len; i += 2)
	{
		_putchar(str[i]);

	}
	_putchar('\n');

}
