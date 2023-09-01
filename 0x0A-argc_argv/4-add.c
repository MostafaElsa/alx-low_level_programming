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

	int i = 0, j = 0, res = 0, dec = 1;

	for (i = 1; i < argc; i++)
	{
		dec = 1;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		while (j--)
		{
			res += (int)(argv[i][j] - 48) * dec;
			dec *= 10;
		}
		j++;
	}
	printf("%d\n", res);
	return (0);
}
