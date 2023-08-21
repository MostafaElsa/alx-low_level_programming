#include "main.h"

/**
 * puts2 - Function
 *
 * @str: pointer
 * Description: whether char is upper or not
 *
 * Return: 1 (digit) 0 (not)
*/

void puts2(char *str)
{

	int i = 0, len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
