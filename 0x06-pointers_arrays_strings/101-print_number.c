#include "main.h"

/**
 * print_number - Function
 * @n: int
 * Description: whether char is upper or lower case
 *
 * Return: 1 (upper) 0 (lower)
*/

void print_number(int n)
{
	unsigned int counter = n;

	if (n < 0)
	{
		_putchar('-');
		counter = -1 * n;
	}
	if (counter / 10 != 0)
	{
		print_number(counter / 10);
	}
	_putchar((counter % 10) + 48);
}
