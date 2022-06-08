#include <stdio.h>
/**
 * main - program that prints all possible combinations of single-digit numbers
 * You can only use putchar, and only four times max
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x < 58)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
