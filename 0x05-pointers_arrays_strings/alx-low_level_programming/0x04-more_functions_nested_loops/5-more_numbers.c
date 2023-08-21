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
		int j, y;

		for (j = 0 ; j <= 14 ; j++)
		{
			y = j;
			if (j >= 10)
			{
				y = j % 10;
				_putchar(48 + 1);
			}
			_putchar(48 + y);
		}
		_putchar('\n');
	}
}
