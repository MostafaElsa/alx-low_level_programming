#include "main.h"

/**
 *  * *_memcpy - function
 *   * @dest: the address of memory to print at
 *    * @src: the address of memory to print
 *     * @n: the size of the memory to print
 *      *
 *       * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

