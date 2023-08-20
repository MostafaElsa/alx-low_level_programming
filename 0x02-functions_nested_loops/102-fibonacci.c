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
	long long a = 1, b = 2, res;

	for (i = 0 ; i < 50 ; i++)
	{
		if (i != 49)
			printf("%d, ", a);
		else
			printf("%d", a);
		res = a + b;
		a = b;
		b = res;
	}
	return (0);
}
