#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print numbers from 0 to 9
 *
 * Return: 0 (success)
 */
int main(void)
{
	int c = 48;

	while (c <= 57)
	{
		putchar(c++);
	}
	putchar('\n');
	return (0);
}
