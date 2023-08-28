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
	while (n--)
	{
		*(dest + n) = *(src + n);
	}
	return (dest);
}

