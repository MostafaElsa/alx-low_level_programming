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
		putchar('\n');
	else
	{
		for (int i = 0 : i < size ; i++)
		{
			for (int j = 0 ; j < size ; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
