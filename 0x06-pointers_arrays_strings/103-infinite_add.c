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
	unsigned int i = 0, j = 0, k, len_n1 = 0, len_n2 = 0, max;

	short x = 0;

	while (n1[i++] != '\0')
		len_n1++;
	while (n2[j++] != '\0')
		len_n2++;
	if (len_n1 >= len_n2)
		max = len_n1;
	else
		max = len_n2;
	if (max  >= size_r)
		return (0);
	r[size_r - 1] = '\0';
	i = size_r - 2;
	j = len_n1 - 1;
	k = len_n2 - 1;
	while (j != 0 && k != 0)
	{
		if (n1[j] + n2[k] > 105)
		{
			r[i--] = (x + n1[j--] + n2[k--]) - 106;
			x = 1;
		}
		else
		{
			r[i--] = (x + n1[j--] + n2[k--]);
			x = 0;
		}
	}
	while (j != 0)
		r[i--] = n1[j--];
	while (k != 0)
		r[i--] = n2[k--];
	if (x == 1)
		return (0);
	else
		return (r);
}
