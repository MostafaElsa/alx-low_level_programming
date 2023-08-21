#include "main.h"

/**
 * times_table - Function
 *
 * Description: print putchar
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
*/
void times_table(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		int j;

		for (j = 0 ; j < 10 ; j++)
		{
			int x = i * j;

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
					int y = x / 10, z = x % 10;

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
