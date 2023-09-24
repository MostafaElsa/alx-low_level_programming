#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print numbers of base 16 lowercase follwed by new line
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
		putchar(c++);
	c = 'a';
	while (c <= 'f')
		putchar(c++);
	putchar('\n');
	return (0);
}
