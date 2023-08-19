#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: false or true vailidation
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i, j, counter;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i + 48);
			putchar(j + 48);
			counter++;
			if ((counter == 2) && (i != 9 || j != 9))
			{
				putchar(',');
				putchar(' ');
				counter = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
