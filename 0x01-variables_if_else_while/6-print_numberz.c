#include <stdio.h>

/**
 * main - Program that prints num 0 - 9
 *
 * Return:0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
