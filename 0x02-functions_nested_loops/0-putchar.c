#include "main.h"

/**
 * main - entry point
 *
 * Description: print putchar
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
*/
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0 ; i < 8 ; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}
