#include "main.h"

/**
 * _strcpy - that copies the string pointed to by src
 * ncluding the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: points to buffer
 * @src: points to string
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *answer = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (answer);
}
