#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: param 1
 * @f: Function Pointer param
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		(*f)(name);
	}
}
