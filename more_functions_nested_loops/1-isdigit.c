#include "main.h"

/**
 * _isdigit - function that checks for a digit 0-9
 * @c: The char to check
 * Return: 1 if c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	else
		return (1);
}
