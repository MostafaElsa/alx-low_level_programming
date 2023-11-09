#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *  * main - Struct op
 *   *
 *    * @argc: number of arguments
 *     * @argv: arguments arrays
 *     Return: always 0
 */
int main(int argc, char *argv[])
{
	int (*op_func)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = (get_op_func(argv[2]));
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	else
		printf("%d\n", op_func(a, b));
	return (0);
}
