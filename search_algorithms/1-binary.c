#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 * Return: -1
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t i, left = 0, right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	for (; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		i = left + (right - left) / 2;
		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] > value)
		{
			right = i - 1;
		}
		else
		{
			left = i + 1;
		}
	}
	return (-1);
}
