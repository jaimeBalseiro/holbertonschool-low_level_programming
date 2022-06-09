#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * You can only use _putchar twice
 * Return - void
 */

void print_alphabet_x10(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int counter;
	int x;

	while (x < 10)
	{
		for (counter = 0; counter < 26; counter++)

		{
			_putchar(alphabet[counter]);
		}
		_putchar('\n');
		x++;
	}
}
