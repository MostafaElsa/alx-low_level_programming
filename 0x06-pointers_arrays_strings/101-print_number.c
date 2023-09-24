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
	int counter, m, x;

	if (n < 0)
	{
		_putchar('-');
		m = -1 * n;
	}
	else
		m = n;
	counter = 10;
	while (counter <= m)
		counter *= 10;
	counter /= 10;
	while (counter != 0)
	{
		x = m / counter;

		_putchar(x + 48);
		m -= (x * counter);
		counter /= 10;
	}
}
