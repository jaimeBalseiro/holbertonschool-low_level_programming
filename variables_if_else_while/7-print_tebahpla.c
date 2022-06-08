#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 * You can only use putchar, and only twice
 * Return: 0
 */

int main(void)
{
	int n = 122;
	
	while (n > 97)
	{
		putchar(n);
		n -= 1;
	}
	putchar('\n');
	return (0);
}
