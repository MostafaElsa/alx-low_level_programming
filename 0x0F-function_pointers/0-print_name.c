#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function
 * @name: char pionter
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	(f)(name);
}
