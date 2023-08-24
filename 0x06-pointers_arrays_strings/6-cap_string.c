#include <stdio.h>
#include "main.h"

/**
 * *cap_string - check the code
 *
 * @a: array
 *
 * Return: Always 0.
 */

char *cap_string(char *a)
{
	int i = 0;

	if (a[i] >= 'a' && a[i] <= 'z')
		a[i] -= 32;
	i++;
	while (a[i] != '\0')
	{
		if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n' || a[i] == ',')
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				a[i + 1] -= 32;
		}
		else if (a[i] == ';' || a[i] == '.' || a[i] == '!')
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				a[i + 1] -= 32;
		}
		else if (a[i] == ')' || a[i] == '{' || a[i] == '}')
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				a[i + 1] -= 32;
		}
		else if (a[i] == '?' || a[i] == '"' || a[i] == '(')
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				a[i + 1] -= 32;
		}
		i++;
	}
	a[i] = '\0';
	return (a);
}
