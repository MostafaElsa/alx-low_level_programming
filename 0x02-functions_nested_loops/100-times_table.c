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
		int i;

		for (i = 0 ; i <= n ; i++)
		{
			int j;

			for (j = 0 ; j <= n ; j++)
			{
				int x = (i * j) + 48;

				if(j == 0)
				{
					_putchar('0');
					continue;
				}
				if (x >= 100)
				{
					int a = (x / 100);

					_putchar(' ');
					_putchar(a + '0');
					x -= (a * 100);
					a = (x / 10);
					_putchar(a + '0');
					x -= (a * 10);
					_putchar(x + '0');
				}
				if else (x >= 10)
				{
					_putchar(' ');
					_putchar(' ');
					int a = (x / 10);

					_putchar(a + '0');
					x -= (a * 10);
					_putchar(x + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(x + '0');
				}
			}
		}
	}
	else
		_putchar('\n');
}
