#include <stdio.h>
#include "main.h"

/**
 * print_square - Function
 * @size: int
 * Description: whether char is upper or lower case
 *
 * Return: 1 (upper) 0 (lower)
*/

void print_square(int size)
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
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
