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
	if (n > 0 && n < 15)
	{
		int i;

		for (i = 0 ; i <= n ; i++)
		{
			int j;

			for (j = 0 ; j <= n ; j++)
			{
				int x = i * j;

				_putchar(x);
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar('\n');
			}
		}
	}
}
