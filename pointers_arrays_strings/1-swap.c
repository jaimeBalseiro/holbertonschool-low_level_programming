#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: points to one value
 * @b: points to the other value
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int change = *a;

	*a = *b;
	*b = change;
}
