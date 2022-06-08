#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * Print all letters except q and e
 * You can only use putchar
 */

int main(void)
{
	int lw = 'a';

	while (lw <= 'z')
	{
		if (lw == 'e' || lw == 'q')
		{
			lw += 1;
		}
		else
		{
			putchar(lw);
			lw += 1;
		}
	}
	putchar('\n');
	return (0);
}
