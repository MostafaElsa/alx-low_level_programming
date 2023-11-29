#include <stdio.h>
#include "main.h"

/**
 * print_binary - functionn
 *
 * @n: the number to be printed in binary
 * Return: no return
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1, x = n;

	while (i <= n)
		i << 1;
	i >> 1;
	while (x != 0)
	{
		if (x >= i)
		{
			x -= i;
			i >> 1;
			printf("1");
		}
		else
		{
			i >> 1;
			printf("0");
		}
	}
}
