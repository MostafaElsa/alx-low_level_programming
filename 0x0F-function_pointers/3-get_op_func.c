#include "3-calc.h"

/**
 *  * get_op_func - Struct op
 *   *
 *    * @s: string
 *    Return: pointer to a function
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (s && *s == (ops[i].op[0]))
			return (ops[i].f);
	}
	return (NULL);
}
