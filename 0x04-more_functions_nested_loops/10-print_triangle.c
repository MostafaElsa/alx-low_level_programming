#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Function
 * @size: int
 * Description: whether char is upper or lower case
 *
 * Return: 1 (upper) 0 (lower)
*/

void print_triangle(int size)
{
	if (size <= 0)
		putchar('\n');
	else
	{
		for (int i = 0 ; i < size ; i++)
		{
			for (int j = 0 ; j < size ; j++)
			{
				if (j < size - 1 - i)
					putchar(' ');
				else
					putchar('#');
			}
			putchar('\n');
		}
	}
}
