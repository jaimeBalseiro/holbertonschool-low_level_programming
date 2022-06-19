#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character
 * @s: string we look through
 * @c: char we look through
 * Return: pointer to the char or NULL
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
