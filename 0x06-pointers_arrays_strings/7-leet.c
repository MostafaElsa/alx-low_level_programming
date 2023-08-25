#include <stdio.h>
#include "main.h"

/**
 * *leet - check the code
 *
 * @a: array
 *
 * Return: Always 0.
 */

char *leet(char *a)
{
	int i = 0, j;

	char x[] = "aeotl";
	char y[] = "43071";

	while (a[i])
	{
		for (j = 0 ; j < 5 ; j++)
		{
			if (a[i] == x[j] || a[i] == x[j] - 32)
			{
				a[i] = y[j];
				break;
			}
		}
		i++;
	}
	return (a);
}
