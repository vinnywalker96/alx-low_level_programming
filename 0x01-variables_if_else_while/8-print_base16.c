#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16
 *
 * Return:0
 */


int main(void)
{
	int i;
	char a;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	for (a = 'a'; a <= 'f'; a++)
		putchar(a);

	putchar('\n');

	return (0);
}
