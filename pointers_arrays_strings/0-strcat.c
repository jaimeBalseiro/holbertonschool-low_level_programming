#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: what we are apprending to
 * @src: string we are apprending from
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *begin = dest;

	while (*dest)
		dest++;
	while(*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (begin);
}
