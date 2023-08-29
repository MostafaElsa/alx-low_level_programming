#include "main.h"
#include <stdio.h>
/**
 *  * print_diagsums - function
 *  @a: int pointer to array 2D
 *  @size: size of
 *  Return: Nothing.
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		sum1 += *(a + ((size + 1) * i));
	}
	a += (size - 1);
	for (i = 0 ; i < size ; i++)
	{
		sum2 += *(a + ((size - 1) * i));
	}
	printf("%d, %d\n", sum1, sum2);
}
