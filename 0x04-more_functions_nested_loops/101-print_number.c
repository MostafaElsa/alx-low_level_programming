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

	counter = 1;
	while(n != 0)
	{
		n /= 10;
		counter *= 10;
	}
	int i;

	for (i = counter ; i > 0 ; i /= 10)
	{



	}

}
