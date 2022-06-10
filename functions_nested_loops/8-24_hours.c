#include "main.h"

/**
 * jack_bauer - function that prints every minute of jack's day
 * starting from 00:00 to 23:59
 * Return: 0
 */

void jack_bauer(void)
{
	int x = 0;
	int j = 0;

	while (x <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j += 1;
		}
	}
}
