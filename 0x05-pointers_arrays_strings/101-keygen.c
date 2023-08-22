#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Function
 *
 * Description: whether char is upper or not
 *
 * Return: 1 (digit) 0 (not)
*/
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2745)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
