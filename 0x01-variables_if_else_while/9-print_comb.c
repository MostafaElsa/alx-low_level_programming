#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all digits spaced by ", "
 *
 * Return: 0 (success)
 */
int main(void)
{
	int c = 48;

	while (c <= 57)
	{
		putchar(c++);
		if (c <= 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
