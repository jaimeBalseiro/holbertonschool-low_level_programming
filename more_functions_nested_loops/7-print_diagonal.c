#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: the lenght of the line
 * Return: void
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n < 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				_putchar(' ');
			}
		_putchar(98);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
