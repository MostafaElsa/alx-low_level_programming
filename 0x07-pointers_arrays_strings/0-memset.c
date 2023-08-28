#include "main.h"

/**
 *  * *_memset - function
 *   * @s: the address of memory to print at
 *    * @b: the element to print
 *     * @n: the size of the memory to print
 *      *
 *       * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*(s++) = b;
	}
	return (s);
}
