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
		_putchar('\n');
	else
	{
		int i;

		for (i = 0 ; i < size ; i++)
		{
			int j;

			for (j = 0 ; j < size ; j++)
			{
				if (j < size - 1 - i)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
