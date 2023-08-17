#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c = 'a';
	while(c <= 'z')
		putchar(c++);
	putchar('\n');
	return (0);
}
