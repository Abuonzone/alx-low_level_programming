#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Get the operators function to be used
 * @s: The operator passed as an argument
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_mul},
		{"%", op_mod},
		{NULL, NULL}
	};
	unsigned int i;

	i = 0;
	while (i < (sizeof(ops)/sizeof(ops[0])))
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
