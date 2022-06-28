#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of ints
 * @min: lower end of vals
 * @max: upper end
 * Return: int pointer
 */
int *array_range(int min, int max)
{
	int *lowerarray;
	int i;

	if (min > max)
		return (NULL);
	lowerarray = malloc(sizeof(int) * (max - min + 1));
	if (lowerarray == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		lowerarray[i] = min;
		min++;
	}
	return (lowerarray);
}
