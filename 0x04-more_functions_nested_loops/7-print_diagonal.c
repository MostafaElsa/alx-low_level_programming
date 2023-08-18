#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Function
 * @n: int
 * Description: whether char is upper or lower case
 *
 * Return: 1 (upper) 0 (lower)
*/

void print_diagonal(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		for (int i = 0 ; i < n ; i++)
		{
			for (int j = 0 ; j < i ; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
		putchar('\n');
	}
}
