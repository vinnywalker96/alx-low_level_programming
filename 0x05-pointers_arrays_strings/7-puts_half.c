#include "main.h"

/**
 * puts_half - prints half the string
 * @str: string input
 */

void puts_half(char *str)
{
	int i, n, temp = 0;

	while (str[temp] != '\0')
	{
		temp++;
	}

	if (temp % 2 == 0)
	{
		n = temp / 2;
	}
	else
	{
		n = (temp - 1) / 2;
	}

	for (i = n; i < temp; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
