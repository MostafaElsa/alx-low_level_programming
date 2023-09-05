#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - contain copy of string in pointer
 * @str: the string to be copied to pointer
 *
 * Return: pointer to the newly allocated memory contain copy of the string
 */
char *_strdup(char *str)
{
	int i = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	ptr = (char *)malloc(i + 1);
	if (ptr == NULL)
		return (NULL);
	ptr = str;
	return (ptr);
}
