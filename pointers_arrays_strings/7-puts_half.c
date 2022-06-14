#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int lenght = 0;
	char *start = str;

	while (*str)
	{
		lenght++;
		str++;
	}
	lenght += 1;
	start += lenght / 2;
	while (*start)
	{
		_putchar(*(start));
		start++;
	}
	_putchar('\n');
}
