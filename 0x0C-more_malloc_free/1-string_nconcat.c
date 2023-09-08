#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - check the malloc
 *
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: size of allocated memory
 * Return: pointer of the allocated memory if success or 98 if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0, j = 0, size;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n < j)
		j = n;
	size = i + j + 1;
	ptr = (char *)malloc(size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j] != '\0')
	{
		ptr[i] = s1[j];
		j++;
		i++;
	}
	j = 0;
	while (i < size - 1)
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
