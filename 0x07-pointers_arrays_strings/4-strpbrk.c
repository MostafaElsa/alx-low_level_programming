#include "main.h"

/**
 *  * *_strpbrk - function
 *  @s: the address of memory to print at
 *  @accept: the string to be found
 *
 *  Return: Nothing.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, counter = 0, x;

	for (i = 0 ; i != '\0' ; i++)
	{
		for (j = 0 ; j != '\0' ; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
