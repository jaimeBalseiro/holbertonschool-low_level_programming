#include "main.h"

/**
 * _abs - function that computes absolute value of an integer
 * @x: the number
 * Return: int.
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = x * (-1);
		return (x);
	}
	else
		return (x);
}
