#include "main.h"

/**
 * puts_half - Function
 *
 * @str: pointer
 * Description: whether char is upper or not
 *
 * Return: 1 (digit) 0 (not)
*/

void puts_half(char *str)
{

	int i = 0, len;

	len = strlen(str);
	if (len % 2 != 0)
		len++;
	for (i = len / 2; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
