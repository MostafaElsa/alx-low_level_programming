#include <stdio.h>
#include "main.h"

/**
 * reverse_array - check the code
 *
 * @a: array
 * @n: number of elements
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i = 0, j;

	while (i < n / 2)
	{
		j = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = j;
		i++;
	}
}
