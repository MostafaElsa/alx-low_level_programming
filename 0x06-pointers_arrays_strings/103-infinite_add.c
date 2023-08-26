#include "main.h"

/**
 * infinite_add - Function
 * @n1: int
 * @n2: int
 * @r: char
 * @size_r: result
 * Description: whether char is upper or lower case
 *
 * Return: 1 (upper) 0 (lower)
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, res, max, res1, res2, x = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	if (i >= j)
		max = i;
	else
		max = j;
	if (size_r <= max + 1)
		return (0);
	r[max + 1] = '\0';
	i--, j--;
	res1 = *(n1 + i) - 48, res2 = *(n2 + j) - 48;
	while (max >= 0)
	{
		res = res1 + res2 + x;
		if (res >= 10)
			x = 1;
		else
			x = 0;
		if (res > 0)
		*(r + max) = (res % 10) + 48;
		else
			*(r + max) = '0';
		if (i > 0)
			i--, res1 = *(n1 + i) - 48;
		else
			res1 = 0;
		if (j > 0)
			j--, res2 = *(n2 + j) - 48;
		else
			res2 = 0;
		max--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
