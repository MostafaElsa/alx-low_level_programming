#include "main.h"

/**
 * print_sign - Function
 * @n: int
 * Description: print the sign of number
 *
 * Return: if (n > 0) 0, if (n < 0) -1, else 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
