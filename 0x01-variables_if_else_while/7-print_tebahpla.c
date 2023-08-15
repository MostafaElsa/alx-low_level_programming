#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: false or true vailidation
 *
 * Return: 0 (success)
 */
int main(void)
{
        char c = 'z';
        while(c >= 'a')
                putchar(c--);
        putchar('\n');
        return(0);
}
