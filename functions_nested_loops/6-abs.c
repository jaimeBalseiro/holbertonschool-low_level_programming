#include "main.h"

/**
 * _abs - function that computes absolute value
 * @x: the number
 * Return: abs
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
