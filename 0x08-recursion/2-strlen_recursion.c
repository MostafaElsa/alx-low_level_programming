#include "main.h"

/**
 *	_print_rev_recursion - check the code
 *	@s: string to print
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	if (*s != '\0')
		_putchar(*s);
}