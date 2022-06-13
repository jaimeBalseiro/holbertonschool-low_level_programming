#include "main.h"

/**
 * more_numbers - function that prints 10 times the #, 0-14
 * You can only use _putchar three times
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
