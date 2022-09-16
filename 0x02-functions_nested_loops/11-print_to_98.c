#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check description
 * Description: prints all natural
 * numbers from n to 98
 *
 * @n: the begin of the loop
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);

	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}

}
