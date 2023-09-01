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

	int i = 0, j = 0, res1 = 0, res2 = 0, dec = 1;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	while (argv[1][i] != '\0')
		i++;
	while (argv[2][j] != '\0')
		j++;
	while (i--)
	{
		if (argv[1][i] != '-')
			res1 += (int)(argv[1][i] - 48) * dec;
		else
			res1 *= -1;
		dec *= 10;
	}
	dec = 1;
	while (j--)
	{
		if (argv[2][j] != '-')
			res2 += (int)(argv[2][j] - 48) * dec;
		else
			res2 *= -1;
		dec *= 10;
	}
	printf("%d\n", res2 * res1);
	return (0);
}
