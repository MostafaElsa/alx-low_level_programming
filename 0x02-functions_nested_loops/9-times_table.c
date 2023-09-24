#include "main.h"

/**
 * times_table - Function
 *
 * Description: print time tables of 9
*/
void times_table(void)
{
	int i, j, x, y, z;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			x = i * j;
			if (j != 0)
			{
				if (x < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + x);
				}
				else
				{
					y = x / 10, z = x % 10;
					_putchar(',');
					_putchar(' ');
					_putchar('0' + y);
					_putchar('0' + z);
				}
			}
			else
			{
				_putchar('0');
			}
		}
		_putchar('\n');
	}
}
