#include "main.h"

/**
 * _strlen - Function
 *
 * @s: pointer
 * Description: whether char is upper or not
 *
 * Return: 1 (digit) 0 (not)
*/

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\n')
	{
		i++;
	}
	return (i);
}
