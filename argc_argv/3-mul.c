#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: the # of args
 * @argv: the names of args
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc > 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
