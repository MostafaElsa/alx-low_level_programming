#include "main.h"

/**
 * print_alphabet - Function
 *
 * Description: print putchar
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
*/
void print_alphabet(void)
{
	int i;

	for (i = 97 ; i < 123 ; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
