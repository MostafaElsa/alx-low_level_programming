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
		int i, j, x;

		for (i = 0 ; i <= n ; i++)
		{
			_putchar('0');
			for (j = 1 ; j <= n ; j++)
			{
				_putchar(',');
				_putchar(' ');
				x = (i * j);
				if (x >= 100)
				{
					_putchar((x / 100) + 48);
					_putchar(((x / 10) % 10) + 48);
				}
				else if (x >= 10)
				{
					_putchar(' ');
					_putchar((x / 10) + 48);
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((x % 10) + 48);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
