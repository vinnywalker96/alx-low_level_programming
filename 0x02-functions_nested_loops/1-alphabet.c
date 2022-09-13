#include "main.h"


/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return:0
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');

}
