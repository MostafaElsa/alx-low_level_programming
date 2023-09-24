#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print sum of even numbers of fibonacci
 *
 * Return: 0
*/
int main(void)
{
	unsigned long int sum = 0L, a = 1L, b = 2L, res = 0L;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
			sum += a;
		res = a + b;
		a = b;
		b = res;
	}
	printf("%lu\n", sum);
	return (0);
}
