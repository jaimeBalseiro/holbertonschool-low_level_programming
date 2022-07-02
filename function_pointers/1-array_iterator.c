#include "function_pointers.h"

/**
 * array_iterator - executes a func on each element of an array
 * @array: array
 * @size: size
 * @action: func to execute
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* declarations */
	size_t i;

	/* checking for NULL */
	if (array == NULL || action == NULL)
		return;
	/* moving through the array */
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
