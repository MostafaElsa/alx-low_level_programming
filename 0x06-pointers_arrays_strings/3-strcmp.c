#include <stdio.h>
#include "main.h"

/**
 * *_strcmp - check the code
 *
 * @s1: dest
 * @s2: src
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	do {
		if (s1[j] - s2[j] > 0)
			return (s1[j] - s2[j]);
		else if (s1[j] - s2[j] < 0)
			return (s1[j] - s2[j]);
		else if (s1[j] - s2[j] == 0)
		{
			if (s1[j] == '\0')
				return (0);
			j++;
		}
	} while (1);
}

