#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - sum function
 * @a: first element
 * @b: second element
 *
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *  * op_sub - difference function
 *   * @a: first element
 *    * @b: second element
 *     *
 *      * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *  * op_mul - product function
 *   * @a: first element
 *    * @b: second element
 *     *
 *      * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *  * op_div - division function
 *   * @a: first element
 *    * @b: second element
 *     *
 *      * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *  * op_mod - reminder division function
 *   * @a: first element
 *    * @b: second element
 *     *
 *      * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
