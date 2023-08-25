#include <stdio.h>
#include "main.h"

/**
 * *rot13 - check the code
 *
 * @a: array
 *
 * Return: Always 0.
 */

char *rot13(char *a)
{
	int i = 0, j = 0;

	char x[] = {abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ};
	char y[] = {nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM};

	while (a[i])
	{
		for (j = 0 ; j < 52 ; j++)
		{
			if (a[i] == x[j])
			{
				a[i] = y[j];
				break;
			}
		}
		i++;
	}
	return (a);
}
