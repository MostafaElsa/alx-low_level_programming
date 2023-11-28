#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - functionn
 *
 * @b: pointer to 0,1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, x = 0, y = 1;

	if (b == NULL)
		return (x);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			x = 0;
			return (x);
		}
		i++;
	}
	while (i--)
	{
		x += ((b[i] - 48) * y);
		y *= 2;
	}
	return (x);
}
