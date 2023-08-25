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
	int i;

	char x[] = {abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ};
	char y[] = {nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM};

	while (*a)
	{
		for (i = 0 ; i < 52 ; i++)
		{
			if (*a == x[i])
			{
				*a = y[i];
				break;
			}
		}
		a++;
	}
	return (a);
}
