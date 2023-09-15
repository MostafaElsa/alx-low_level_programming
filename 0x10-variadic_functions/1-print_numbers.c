#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function
 *
 * @separator: spaces between arguments
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			separator = "\n";
		printf("%d%s", va_arg(p, int), separator ? separator : "");
	}
	va_end(p);
}
