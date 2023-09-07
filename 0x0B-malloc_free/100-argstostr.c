#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that  that concatenates all the arguments
 * @ac: number of arguments
 * @av: arguments
 * Return: pointer to result arguments
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, x, s[ac], size;
	char *ptr;

	if (av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		s[i] = j + 1;
		size += s[i];
	}
	ptr = (char *)malloc(size);
	x = --size;
	for (i = ac; i >= 0; i--)
	{
		if (av[i] == NULL)
		{
			free(ptr);
			return (NULL);
		}
		k = s[i];
		while (k--)
		{
			if (av[i][k] == '\0')
				*(ptr + x--) = '\n';
			else
				*(ptr + x--) = av[i][k];
		}
	}
	*(ptr + size) = '\0';
	return (ptr);
}
