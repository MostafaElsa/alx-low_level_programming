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

	int len, i;

	len = strlen(s);
	int arr[len];

	for (i = 0 ; i < len; i++)
	{
		arr[i] = *(s + i);
	}
	for (i = len - 1; i >= 0; i--)
	{
		*(s + len - 1 - i) = arr[i];
	}
}
