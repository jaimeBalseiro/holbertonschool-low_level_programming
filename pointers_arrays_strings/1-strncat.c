#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: append to
 * @src: append from
 * @n: append by
 * Return: char *
 */
char *_strncat(char *dest, char *src, int n)
{
	char *begin = dest;

	while (*dest)
		dest++;
	for (; n > 0; n--)
	{
		if (*src)
		{
			*dest = *src;
			dest++;
			src++;
		}
		else
			break;
	}
	return (begin);
}
