#include <stdio.h>
#include "main.h"

/**
 * print_line - Function
 * @n: int
 * Description: whether char is upper or lower case
 *
 * Return: 1 (upper) 0 (lower)
*/

void print_line(int n)
{
	for (int i = 0 ; i < n ; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
