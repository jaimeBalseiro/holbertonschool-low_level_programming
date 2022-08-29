#include "search_algos.h"

/**
 * linear_search - look for value sequentially
 * @array: the array of values
 * @size: size of array
 * @value: what we are searching for
 * Return: index found at or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (!array)
		return (-1);
	for (index = 0; index < size; index++)
	{
		printf("Value checked arrray[%d] = [%d]\n", (int)index, (int)array[index]);
		if (value == array[index])
		{
			return (index);
		}
	}
	return (-1);
}
