#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the # of args passed into it
 * @argc: the # of args
 * @argv: the names of args
 * Return: 0
 */
int main(int argc, __attribute__((unused))char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
