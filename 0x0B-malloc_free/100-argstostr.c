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
	int i, size;
	char *ptr;

	if (av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		size += sizeof(av[i]);
	ptr = (char *)malloc(sizeof(size);
	size--;
	*(ptr + size) = '\0';
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
		{
			while (i >= 0)
			{
				free(av[i]);
				i--;
			}
			free(av);
			return (NULL);
		}
		while (size--)
		{
			if (av[i][size] == '\0')
				*(ptr + size) = '\n';
			else
				*(ptr + size) = av[i][size];
		}
	}
	return (ptr);
}
