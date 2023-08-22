#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print putchar
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
*/
int main(void)
{
	long int a = 1L, b = 2L, c = 98, res = 0L;

	while (c--)
	{
		printf("%ld\n", a);
		res = a + b;
		a = b;
		b = res;
	}
	return (0);
}
