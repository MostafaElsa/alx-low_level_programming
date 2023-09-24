#include "main.h"

/**
 * _isalpha - Function
 * @c: int
 * Description: whether char is alpha or not
 *
 * Return: if alpha 1, else 0
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
