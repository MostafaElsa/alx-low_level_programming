#include "main.h"

/**
 * _isupper - Function
 *
 * @c: char
 * Description: whether char is upper or not
 *
 * Return: 1 (digit) 0 (not)
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
