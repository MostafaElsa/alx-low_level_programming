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
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] == 'A' || a[i] == 'a')
			a[i] = 52;
		else if (a[i] == 'e' || a[i] == 'E')
			a[i] = 51;
		else if (a[i] == 'O' || a[i] == 'o')
			a[i] = 48;
		else if (a[i] == 'T' || a[i] == 't')
			a[i] = 55;
		else if (a[i] == 'l' || a[i] == 'L')
			a[i] = 49;
		i++;
	}
	a[i] = '\0';
	return (a);
}
