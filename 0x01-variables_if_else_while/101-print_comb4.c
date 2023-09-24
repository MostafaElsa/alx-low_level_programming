#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print combination of 3 digits spaced by ", "
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i, j, z;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (z = j + 1; z < 10; z++)
			{
				putchar(i + 48);
				putchar(j + 48);
				putchar(z + 48);
				if (i != 7 || j != 8 || z != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
