#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - counts and returns string length
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int counter = 0;

	if (!*s)
		return (0);
	while (*s)
	{
		counter++;
		s++;
	}
	return (counter);
}
/**
 * string_nconcat - concats 2 strings
 * @s1: first string
 * @s2: second string
 * @n: how much of s2 to add
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	int i;
	int j = 0;
	int total = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	total += _strlen(s1) + n;
	new = malloc((total * sizeof(char)) + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		new[i] = s1[i];
	}
	for (; n || !s2; n--, i++, j++)
	{
		new[i] = s2[j];
	}
	new[i] = '\0';
	return (new);
}
