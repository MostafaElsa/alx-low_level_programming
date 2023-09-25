#include <stdio.h>


/**
 *  * numLen - entry point
 *   *
 *    * @num: int
 *     * Description: print putchar
 *      *
 *       * Return: On success 1.
 *        * On error, -1 is returned, and error is set appropriately.
 */
int numLen(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num /= 10;
		length++;
	}
	return (length);
}
/**
 *  * main - entry point
 *   *
 *    * Description: print putchar
 *     *
 *      * Return: On success 1.
 *       * On error, -1 is returned, and error is set appropriately.
 */
int main(void)
{
	int i, init0s;
	unsigned long int f1 = 1L, f2 = 2L, sum1 = 0L, mx = 100000000, s1 = 0L, s2 = 0L, sum2 = 0L;
	for (i = 0; i < 98; i++)
	{
		if (s1 > 0)
			printf("%lu", s1);
		init0s = numLen(mx) - 1 - numLen(f1);
		while (s1 > 0 && init0s > 0)
		{
			printf("%d", 0);
			init0s--;
		}
		printf("%lu", f1);
		sum1 = (f1 + f2) % mx;
		sum2 = s1 + s2 + (f1 + f2) / mx;
		f1 = f2;
		s1 = s2;
		f2 = sum1;
		s2 = sum2;
		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
