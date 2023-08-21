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
	len++;
	for (i = len / 2; s[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
