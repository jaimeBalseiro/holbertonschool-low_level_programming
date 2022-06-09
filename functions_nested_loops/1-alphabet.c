#include "main.h"

/**
 * print_alphabet - function that prints the alphabet, in lowercase, w/ \n
 * You can only use _putchar twice
 * Return -  void
 */

void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0; x < 26; x++)
	{
		_putchar(alphabet[x]);
	}
	_putchar('\n');
}
