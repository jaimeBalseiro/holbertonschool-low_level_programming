#include "main.h"

/**
 * _strpbrk - located the first occurence in s of any bytes in accept
 * @s: string we look for occ in
 * @accept: print we comp against
 * Return: pointer to the byte or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char c, *p;

	for (c = *s; c != 0; s++, c = *s)
	{
		for (p = accept; *p != 0; p++)
		{
			if (c == *p)
			{
				return (s);
			}
		}
	}
	return (0);
}
