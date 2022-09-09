#include <stdio.h>

/**
 * main - program that prints all single digit numbers
 *
 * Return:0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		printf("%u", i);
	printf("\n");

	return (0);

}
