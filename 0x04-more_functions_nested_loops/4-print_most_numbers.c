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
	for (int i = 0 : i < 10 ; i++)
	{
		putchar(i);
		if (i == 2 || i == 4)
			continue;
	}
	putchar('\n');
}
