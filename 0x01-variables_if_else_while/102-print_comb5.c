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
	int i, j, k, l, counter;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			counter = 0;
			for (k = i; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (k == i && counter == 0)
						l = j + 1;
					putchar(i + 48);
					putchar(j + 48);
					putchar(' ');
					putchar(k + 48);
					putchar(l + 48);
					counter++;
					if (i != 9 || j != 8 || k != 9 || l != 9)
					{
						putchar(',');
						putchar(' ');
					}
					else
					{
						putchar('\n');
						return (0);
					}
				}
			}
		}
	}
	return (0);
}
