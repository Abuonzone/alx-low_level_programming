#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all parameter
 * @n: constant param
 * Return: if n == 0, 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, x = 0;
	va_list = ap;

	va_start(ap);
	if (n == 0)
		return (0);
	for (i = n; i > 0; i = va_arg(ap, const unsigned int))
	{
		x += i;
	}
	va_end(ap);
	return (x);
}

