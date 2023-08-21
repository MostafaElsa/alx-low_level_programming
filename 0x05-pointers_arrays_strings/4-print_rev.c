#include "main.h"

/**
 * print_rev - Function
 *
 * @s: pointer
 * Description: whether char is upper or not
 *
 * Return: 1 (digit) 0 (not)
*/

void print_rev(char *s)
{

	int i;

	i = _strlen(s);
	while (i)
	{
		i--;
		putchar(*(s + i));
	}
	putchar('\n');
}
