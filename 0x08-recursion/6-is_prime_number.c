#include "main.h"

/**
 *	_prime - check the code
 *	@n: number
  *	@r: root
 *	Return: result
 */
int _prime(int n, int r)
{
    if (r < n && n % r == 0)
        return (0);
    if (r == n)
        return (1);
    return _prime(n, ++r);
}

/**
 *	is_prime_number - check the code
 *	@n: number
 *	Return: result
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 2));
}
