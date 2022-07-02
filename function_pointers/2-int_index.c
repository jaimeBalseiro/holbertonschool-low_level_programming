#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: array
 * @size: size
 * @cmp: points to comp func
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	/* declarations */
	int i;

	/* checking input */
	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	/* moving through array looking for int */
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
