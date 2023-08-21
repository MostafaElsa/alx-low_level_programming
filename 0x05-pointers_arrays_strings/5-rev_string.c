#include "main.h"

/**
 * rev_string - Function
 *
 * @s: pointer
 * Description: whether char is upper or not
 *
 * Return: 1 (digit) 0 (not)
*/

void rev_string(char *s)
{

	int len, i, x;

	len = strlen(s);
	for (i = 0 ; i < len / 2; i++)
	{
		x = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = x;
	}
}
