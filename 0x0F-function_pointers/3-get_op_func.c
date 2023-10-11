#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Selects correct function based on operator used
 * @s: The operator
 * Return: Pointer to the function corresponding with the operator
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

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
