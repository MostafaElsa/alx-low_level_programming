#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Function
 *
 * Description: whether char is upper or lower case
 *
 * Return: 1 (upper) 0 (lower)
*/

void print_most_numbers(void)
{
	for (char i = 48 : i < 58 ; i++)
	{
		if (i == 50 || i == 52)
			continue;
		else
			putchar(i);
	}
	putchar('\n');
}
