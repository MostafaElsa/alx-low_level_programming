#include "main.h"

/**
 * jack_bauer - Function
 *
 * Description: print minutes from 00:00 to 23:59
 *
*/
void jack_bauer(void)
{
	int i, j, z, m, x, y;

	for (i = 0 ; i < 24 ; i++)
	{
		x = i / 10, y = i % 10;
		for (j = 0 ; j < 60 ; j++)
		{
			z = j / 10, m = j % 10;
			_putchar('0' + x);
			_putchar('0' + y);
			_putchar(':');
			_putchar('0' + z);
			_putchar('0' + m);
			_putchar('\n');
		}
	}
}
