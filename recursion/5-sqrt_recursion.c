#include "main.h"

/**
 * _sqrt_recursion - returns the natural sqrt of a num
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (SqrtNum(n, 1));
}

/**
 * SqrtNum - returns the number of sqrt
 * @num: number
 * @i: counter
 * Return: int
 */
int SqrtNum(int num, int i)
{
	if (num == (i * i))
		return (i);
	else if (num > (i * i))
		return (SqrtNum(num, i + 1));
	else
		return (-1);
}
