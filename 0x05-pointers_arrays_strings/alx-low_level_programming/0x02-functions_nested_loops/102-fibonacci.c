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
	int i;
	long int a = 1L, b = 2L, res = 0L;

	for (i = 0 ; i < 50 ; i++)
	{
		if (i != 49)
			printf("%ld, ", a);
		else
			printf("%ld\n", a);
		res = a + b;
		a = b;
		b = res;
	}
	return (0);
}
