#include "main.h"

/**
 * _isdigit - Function
 *
 * @c: char
 * Description: whether char is digit or not
 *
 * Return: 1 (digit) 0 (not)
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
