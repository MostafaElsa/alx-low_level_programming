#include "main.h"

/**
 * _islower - Function
 * @c: char
 * Description: whether the char is lower or not
 *
 * Return: if lower 1, else 0
 * On error, -1 is returned, and error is set appropriately.
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
