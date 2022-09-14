#include "main.h"

/**
 * jack_bauer - function that print time
 *
 * Return:0
 */

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int remaining_hours;
	int remaining_min;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			remaining_min = minutes % 10;
			remaining_hours = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(remaining_hours + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(remaining_min + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
