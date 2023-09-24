#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - function
 *
 * Description: print if the number is positive or negative or zero
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
