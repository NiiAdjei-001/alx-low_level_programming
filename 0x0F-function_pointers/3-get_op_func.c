#include "3-calc.h"
/**
 * get_op_func - gets the function that matches the operator
 * @s: operator eg + - * / %
 * @a: first integer
 * @b: second integer
 * Return: returns the function matching the operator
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

	i = 0;

	while (s != ops[i].op && i < 6)
		i++;
	if ((i == 3 || i == 4) && b == 0)
		return (NULL);
	return (ops[i].op);
}
