#include <stdio.h>
#include "main.h"

/**
 * *_strncat - check the code
 *
 * @dest: dest
 * @src: src
 * @n: int
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n)
	{
		if (src[j] == '\0')
		{
			dest[i] = src[j];
			break;
		}
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

