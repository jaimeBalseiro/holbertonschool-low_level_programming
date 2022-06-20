#include "main.h"

/**
 * is_prime_number - returns 1 if the output is a prime num
 * otherwise return 0
 * @n: number
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (PrimNum(n, 2));
}

/**
 * PrimNum - gets if num is 0 or 1
 * @num: number
 * @i: counter
 * Return: int
 */
int PrimNum(int num, int i)
{
	if (num == i)
		return (1);
	if (num % i == 0)
		return (0);
	return (PrimNum(num, i + 1));
}
