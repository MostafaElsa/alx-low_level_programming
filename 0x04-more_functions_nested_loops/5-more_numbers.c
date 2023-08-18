#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Function
 *
 * Description: whether char is upper or lower case
 *
 * Return: 1 (upper) 0 (lower)
*/

void more_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		int j;

		for (j = 48 ; j < 63 ; j++)
		{
			if (j < 58)
				_putchar(j);
			else
			{
				int x = j / 10, y = j % 10;

				_putchar(x);
				_putchar(y);
		}
		_putchar('\n');
	}
}
