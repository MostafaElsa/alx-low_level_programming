#include "main.h"

/**
 * print_to_98 - Function
 * @n: int
 * Description: print putchar
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n != 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n != 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
