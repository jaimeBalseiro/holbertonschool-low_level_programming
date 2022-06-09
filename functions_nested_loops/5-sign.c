#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: the number
 * Return: 1 if pos, 0 if zero, -1 if neg
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
