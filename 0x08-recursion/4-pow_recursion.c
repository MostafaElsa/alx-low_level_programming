#include "main.h"

/**
 *	_pow_recursion - check the code
 *	@x: base
 *	@y: power
 *	Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
}
