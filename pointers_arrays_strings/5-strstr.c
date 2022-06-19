#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occ of needle in haystack
 * @haystack: where we look
 * @needle: what we look for
 * Return: pointer to begg of locked substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int point;

	for (; *haystack; haystack++)
	{
		for (point = 0; needle[point]; point++)
		{
			if (!(*(haystack + point)))
			{
				return (NULL);
			}
		if (*(haystack + point) != needle[point])
			break;
		}
		if (needle[point] == '\0')
			return (haystack);
	}
	return (NULL);
}
