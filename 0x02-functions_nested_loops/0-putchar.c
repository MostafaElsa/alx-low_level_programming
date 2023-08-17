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
	char *c = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		putchar(c[i]);
	}
	putchar("\n");
	return (0);
}
