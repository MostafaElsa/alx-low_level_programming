#include "main.h"

/**
 * *_strcpy - Function
 *
 * @dest: pointer
 * @src: pointer
 * Description: whether char is upper or not
 *
 * Return: 1 (digit) 0 (not)
*/

char *_strcpy(char *dest, char *src);
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
