#include <stdio.h>

/**
 * main - Print all the letters except q and e
 *
 * Return: Always 0.
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e')
			continue;

		if (alpha == 'q')
			continue;

		putchar(alpha);
	}
	putchar('\n');

	return (0);

}
