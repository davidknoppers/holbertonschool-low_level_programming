#include "holberton.h"
/**
 * jack_bauer - prints very minute in Jack's long day
 * Return: none
 */

void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar(hours / 10 + 48);
			_putchar(hours % 10 + 48);
			_putchar(':');
			_putchar(minutes / 10 + 48);
			_putchar(minutes % 10 + 48);
			_putchar('\n');
		}
	}
}
