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
	int counter;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	counter = 10;
	while (counter <= n)
		counter *= 10;
	counter /= 10;
	while (counter != 0)
	{
		int x = n / counter;

		x += 48;
		_putchar(x);
		x -= 48;
		n -= (x * counter);
		counter /= 10;
	}
}
