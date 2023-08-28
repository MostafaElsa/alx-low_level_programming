#include "main.h"

/**
 *  * *_strspn - function
 *  @s: the address of memory to print at
 *  @accept: the string to be found
 *
 *  Return: Nothing.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, counter = 0;

	for (i = 0 ; i != '\0' ; i++)
	{
		for (j = 0 ; j != '\0' ; j++)
		{
			if (*(s + i) == *(accept + j))
				counter++;
			else
				return (counter);
		}
	}
}

