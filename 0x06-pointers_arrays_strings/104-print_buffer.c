#include "main.h"

/**
 * print_buffer - Function
 * @b: char
 * @size: int
 * Description: whether char is upper or lower case
 *
 * Return: 1 (upper) 0 (lower)
*/

void print_buffer(char *b, int size)
{
	int i, j, x = 0, y = 0;

	if (size > 0)
	{
		while (x < size)
		{
			i = 10;
			j = 10;
			if (x % 10 == 0)
			{
				printf("%08x", x);
				printf(":");
			}
			while (i--)
			{
				if (x % 2 == 0)
					printf(" ");
				if (x < size)
					printf("%02x", *(b + x++));
				else
					printf("  ");
			}
			if (y % 10 == 0)
			{
				printf(" ");
			}
			while (j--)
			{
				if (y >= size)
					break;
				else if (*(b + y) >= 32 && *(b + y) <= 126)
					printf("%c", *(b + y++));
				else
					printf(".");
			}
			printf("\n");
		}
	}
	else
		printf("\n");
}
