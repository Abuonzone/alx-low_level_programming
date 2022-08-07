#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
/**
 * get_op_func - Get the operators function to be used
 * @s: The operator passed as an argument
 * Return: int
 */

int (*get_op_func(char *s))(int, int)
{
	opt_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_mul},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while ((ops[i].op[0] != s[0]) && i < sizeof(ops)/sizeof(ops[0]))
	{
		i++;
		return (ops[i].f);
	}
}
