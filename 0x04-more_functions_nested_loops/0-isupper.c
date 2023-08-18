#include "main.h"

/**
 * _isupper - Function
 *
 * @c: char
 * Description: whether char is upper or lower case
 *
 * Return: 1 (upper) 0 (lower)
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
