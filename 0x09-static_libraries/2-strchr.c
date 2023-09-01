#include "main.h"

/**
 *  * *_strchr - function
 *  @s: the address of memory to print at
 *  @c: the char to be found
 *
 *  Return: Nothing.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (1)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		if (*(s + i) == '\0')
		{
			return ('\0');
		}
		i++;
	}
}

