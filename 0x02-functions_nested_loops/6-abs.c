#include "main.h"

/**
 * _abs - Function
 * @n: int
 * Description: compute the absolute value
 *
 * Return: the absolute value
*/
int _abs(int n)
{
	if (n <= 0)
		n *= -1;
	return (n);
}
