#include "main.h"

/**
 * print_alphabet_x10 - Function
 *
 * Description: print putchar
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		int j;

		for (j = 97 ; j < 123 ; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
