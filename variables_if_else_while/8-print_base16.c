#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase
 * You can only use putchar, and only three times
 * Return: 0
 */

int main(void)
{
	int x = 97;
	int l = 'a';

	while (x <= 57)
	{
		putchar(x);
		x += 1;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
