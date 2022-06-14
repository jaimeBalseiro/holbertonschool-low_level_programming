#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
		if (*str)
		str++;
	}
	_putchar('\n');
}
