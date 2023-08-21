#include "main.h"

/**
 * swap_int - Function
 * @a: pointer 1
 * @b: pointer 2
 * Description: whether char is upper or not
 *
 * Return: 1 (digit) 0 (not)
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
