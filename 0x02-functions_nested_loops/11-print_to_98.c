#include "main.h"

/**
 * print_to_98 - Function
 * @n: int
 * Description: print all numbers from n to 98
*/
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("98\n");
}
