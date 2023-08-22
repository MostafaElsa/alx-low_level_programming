#include <stdio.h>
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

	counter = 10;
	while(counter < n)
		counter *= 10;
	counter /= 10;
	while (n != 0)
	{
		int x = n % counter;
		_putchar(x + '0');
		n -= (x * counter);
		counter /= 10;
	}
}
