#include "main.h"

/**
 * print_array - Function
 *
 * @a: pointer
 * @n: pointer
 * Description: whether char is upper or not
 *
 * Return: 1 (digit) 0 (not)
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		else
			printf("\n");
	}

}
