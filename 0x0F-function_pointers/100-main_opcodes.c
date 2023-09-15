#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - print opcodes
 *
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	char *p = (char *)main;
	int x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (x--)
		printf("%02hhx%s", *p++, x ? " " : "\n");
	return (0);
}

