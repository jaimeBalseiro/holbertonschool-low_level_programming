#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: The character to check
 * Return: 1 if c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c < 65 || c > 90)
		return (0);
	else
		return (1);
}
