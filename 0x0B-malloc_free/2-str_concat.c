#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concate two strings
 * @s1: the 1st string
 * @s2: the 2nd string
 * Return: pointer to the newly allocated contain s1 -> s2 -> '\0'
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *ptr;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	ptr = (char *)malloc(i + j + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0, j = 0;
	while (s1[j] != '\0')
		ptr[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
