#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print sum of 3s and 5s lower than 1024
 *
 * Return: On success 0.
*/
int main(void)
{
	int i, sum = 0;

	for (i = 3 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
