#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - selects appropriate function
 * @s: operator
 * Return: pointer to the corresponding function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{NULL, NULL},
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};
	int a = 0;

	while (ops[a].op)
	{
		if (strcmp(ops[a].op, s) == 0)
			return (ops[a].f);
		a++;
	}
	return (NULL);
}
