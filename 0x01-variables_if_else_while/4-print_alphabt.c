#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print lowercase alphabet except q and e
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c++);
		else
		{
			c++;
			continue;
		}
	}
	putchar('\n');
	return (0);
}
