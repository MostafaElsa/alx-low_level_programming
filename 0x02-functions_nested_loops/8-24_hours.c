#include "main.h"

/**
 * jack_bauer - Function
 *
 * Description: print putchar
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
*/
void jack_bauer(void)
{
	int i;

	for (i = 0 ; i < 24 ; i++)
	{
		int j, x = i / 10, y = i % 10;

		for (j = 0 ; j < 60 ; j++)
		{
			int z = j / 10, m = j % 10;

			_putchar('0' + x);
			_putchar('0' + y);
			_putchar(':');
			_putchar('0' + z);
			_putchar('0' + m);
		}
		_putchar('\n');
	}
}
