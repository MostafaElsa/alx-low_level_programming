#include <stdio.h>
#include "main.h"

/**
 * *string_toupper - check the code
 *
 * @a: array
 *
 * Return: Always 0.
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
		i++;
	}
	a[i] = '\0';
	return (a);
}
