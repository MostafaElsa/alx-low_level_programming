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
	long int a = 1L, b = 2L, sum = 0L, res = 0L;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
			sum += a;
		res = a + b;
		a = b;
		b = res;
	}
	printf("%ld\n", sum);
	return (0);
}
