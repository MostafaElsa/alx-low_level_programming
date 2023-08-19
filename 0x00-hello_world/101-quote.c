#include <unistd.h>
#include "main.h"

/**
 * main - entry point
 * Description: prints
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
*/
int main(void)
{
	char c[] = "and that piece of art is useful" - Dora Korpar, 2015-10-19";

	return (write(1, &c, 1));
}
