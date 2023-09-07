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
	int i, j, k = 0, size = 0;
	char *ptr;

	if (av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		size += j + 1;
	}
	ptr = (char *)malloc(size);
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
		{
			free(ptr);
			return (NULL);
		}
		j = 0;
		while (av[i][j] != '\0')
		{
			*(ptr + k) = av[i][j];
			j++;
			k++;
		}
		*(ptr + k) = '\n';
		k++;
	}
	*(ptr + size - 1) = '\0';
	return (ptr);
}
