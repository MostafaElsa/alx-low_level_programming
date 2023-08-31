#include "main.h"

/**
 *	_sqrt_recursion - check the code
 *	@n: number
 *	Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 1));
	}
}
/**
 *	_sqrt - check the code
 *	@n: number
 *	@r: root
 *	Return: result
 */
int _sqrt(int n, int r)
{
    if (r * r > n)
        return (-1);
    if (r * r == n)
        return (r);
    _sqrt(n, ++r);
