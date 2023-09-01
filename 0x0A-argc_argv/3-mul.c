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

	int i = 0, j = 0, res2 = 0, dec2 = 0;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	while (argv[1][i] != '\0')
		i++;
	while (argv[2][j] != '\0')
		j++;
	for (; i >= 0 ; i--)
	{
		int x, mod = 0, res = 0, dec = 1;

		for (; j >= 0; j--)
		{
			x = (int)(argv[i] - 1) * (int)(argv[j] - 1) + mod;
			if (x > 9)
			{
				x %= 10;
				mod = 1;
			}
			else
				mod = 0;
			res += x * dec;
			dec *= 10;
		}
		res2 += (res * dec2);
		dec2 *= 10;
	}
	printf("%d\n", res2);
	return (0);
}
