#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - check the code
 *
 * @dest: dest
 * @src: src
 * @n: int
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n)
	{
		if (src[j] == '\0')
		{
			while (j < n)
			{
				dest[j] = '\0';
				j++;
			}
			return (dest);
		}
		dest[j] = src[j];
		j++;
	}
	return (dest);
}

