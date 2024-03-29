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
	unsigned int i, j, counter = 0, x;

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
		x = counter;
		for (j = 0 ; *(accept + j) != '\0' ; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				counter++;
				break;
			}
		}
		if (x == counter)
			break;
	}
	return (counter);
}
