#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase
 * You can only use putchar, and only three times
 * Return: 0
 */

int main(void)
{
	int n = 97;
	int l = 'a';

	while (n <= 57)
	{
		putchar(n);
		n += 1;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
