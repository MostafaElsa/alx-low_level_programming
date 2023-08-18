#include "main.h"

/**
 * print_last_digit - Function
 * @n: int
 * Description: print putchar
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
*/
int print_last_digit(int n)
{
	n %= 10;
	if (n > 0)
	{
		_putchar('0' + n);
		return (n);
	}
	else if (n < 0)
	{
		_putchar('0' - n);
		return (-n);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
