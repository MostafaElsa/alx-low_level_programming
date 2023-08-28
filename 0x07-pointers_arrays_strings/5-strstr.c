#include "main.h"

/**
 *  * *_strstr - function
 *  @haystack: the address of memory to print at
 *  @needle: the string to be found
 *
 *  Return: Nothing.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, x;

	for (i = 0 ; *(haystack + i) != '\0' ; i++)
	{
		x = i;
		for (j = 0 ; *(needle + j) != '\0' ; j++)
		{
			if (*(haystack + i) != *(needle + j))
				break;
			i++;
		}
		if(*(needle + j) == '\0')
			return (haystack + x);

	}
	return ('\0');
}
