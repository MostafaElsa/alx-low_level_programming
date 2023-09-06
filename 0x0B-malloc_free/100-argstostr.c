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
	int i, **ptr;

	ptr = (char **)malloc(sizeof(char *) * ac);
	if (av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		ptr[i] = (int *)malloc(sizeof(av[i]));
		if (av[i] == null)
		{
			while (i >= 0)
			{
				free(av[i]);
				i--;
			}
			free(av);
		}
	}
	else
	{
		ptr[i] = av[i];
		if (i != ac - 1)
			ptr[i][sizeof(av[i]) - 1] = '\n';
	}
	return (ptr);
}
