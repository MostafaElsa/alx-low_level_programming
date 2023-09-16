#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function
 *
 * @separator: spaces between arguments
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			separator = "\n";
		printf("%s", (str = va_arg(p, char *)) ? str : ("nil"));
		if (separator)
			printf("%s", separator);
	}
	va_end(p);
}
