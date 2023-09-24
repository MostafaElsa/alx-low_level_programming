#include "main.h"

/**
 * print_times_table - Function
 *
 * @n: int
 * Description: print putchar
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
*/
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, x, y, z, m;

		for (i = 0 ; i <= n ; i ++)
		{

			for (j = 0 ; j <= n ; j++)
			{
				x = (i * j);
				if (j != 0)
				{
					if (x < 10)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(x + '0');
					}
					else if (x < 100)
					{
						y = x / 10, z = x % 10;
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(y + '0');
						_putchar(z + '0');
					}
					else
					{
						y = x / 100, z = (x % 100) / 10, m = x % 10;
						_putchar(',');
						_putchar(' ');
						_putchar(y + '0');
						_putchar(z + '0');
						_putchar(m + '0');
					}
				}
				else
					_putchar('0');
			}
			_putchar('\n');
		}
	}
}
