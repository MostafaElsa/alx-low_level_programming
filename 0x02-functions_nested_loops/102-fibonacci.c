#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print fibonacci numbers
 *
 * Return: 0
*/
int main(void)
{
	int i;
	unsigned long int a = 1L, b = 2L, res = 0L;

	for (i = 0 ; i < 50 ; i++)
	{
		if (i != 49)
			printf("%lu ,", a);
		else
			printf("%lu\n", a);
		res = a + b;
		a = b;
		b = res;
	}
	return (0);
}
