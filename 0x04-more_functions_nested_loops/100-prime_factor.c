#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: whether char is upper or lower case
 *
 * Return: 1 (upper) 0 (lower)
*/

int main(void)
{
	long long i, x;
	int c;

	for (i = 612852475143 ; ; i++)
	{
		c = 1;
		for (j = 2 ; j * j <= i  ; j++)
		{
			if (i % j == 0)
			{
				c = 0;
				break;
			}
		}
		if (c == 1)
		{
			printf("%lld\n");
			break;
		}
	}
}
