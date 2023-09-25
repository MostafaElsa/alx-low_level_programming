#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
	unsigned long int x = 2967119253;
	unsigned long int py, sum;

	for (py = 2; ; py++)
	{
		if (x % py == 0)
		{
			sum += py;
		}
	}
	printf("%ld\n", py);
	return (0);
}
