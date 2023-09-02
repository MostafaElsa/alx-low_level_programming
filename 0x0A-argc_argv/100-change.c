#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of agrument passed to main
 * @argv: array of pointers of strings passed to main
 * Description: A C program that print with printf function
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
	int res = 0, x;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	res += (x / 25);
	x %= 25;
	res += (x / 10);
	x %= 10;
	res += (x / 5);
	x %= 5;
	res += (x / 2);
	x %= 2;
	res += x;
	printf("%d\n", res);
	return (0);
}
