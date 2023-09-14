#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error");
		exit(98);
	}
	a = atoi(argv[0]);
	b = atoi(argv[2]);
	int x = (get_op_func(argv[1]))(a, b);
	printf("%d", x);
}
