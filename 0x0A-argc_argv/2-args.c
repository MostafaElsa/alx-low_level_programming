#include <stdio.h>
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
	int i;

	for (i = 0; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
