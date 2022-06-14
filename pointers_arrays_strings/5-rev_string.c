#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	char *start = s;
	char temp;

	for (; *(s + 1); )
	{
		s++;
	}
	while (start < s)
	{
		temp = *start;
		*start = *s;
		*s = temp;
		s--;
		start++;
	}
}
