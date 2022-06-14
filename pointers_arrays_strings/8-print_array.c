#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n > 0)
	{
		printf("%d", a[i]);
		i++;
		n--;
	}
	for (; n > 0; n--)
	{
		printf(", %d", a[i]);
		i++;
	}
	printf("\n");
}
