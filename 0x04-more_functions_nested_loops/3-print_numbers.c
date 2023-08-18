#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Function
 *
 * Description: print numbers from 0 to 9
 *
 * Return: no return value
*/
void print_numbers(void)
{
	for (char i = 48 ; i < 58 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
