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
	int i = -1;

	while (a[++i] != '\0')
	{
		if (a[i] == 'A' || a[i] == 'a')
		{
			a[i] = 52;
			continue;
		}
		if (a[i] == 'e' || a[i] == 'E')
		{
			a[i] = 51;
			continue;
		}
		if (a[i] == 'O' || a[i] == 'o')
		{
			a[i] = 48;
			continue;
		}
		if (a[i] == 'T' || a[i] == 't')
		{
			a[i] = 55;
			continue;
		}
		if (a[i] == 'l' || a[i] == 'L')
		{
			a[i] = 49;
			continue;
		}
	}
	a[i] = '\0';
	return (a);
}
