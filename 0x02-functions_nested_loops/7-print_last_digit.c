#include "main.h"

/**
 * print_last_digit - Function
 * @n: int
 * Description: print last digit of number
 *
 * Return: the last digit
*/
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n *= -1;
	_putchar('0' + n);
	return (n);
}
