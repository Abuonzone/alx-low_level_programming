#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all parameter
 * @n: constant param
 * Return: if n == 0, 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x = 0;
	va_list ap;

	va_start(ap, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		x += va_arg(ap, const unsigned int);
	}
	va_end(ap);
	return (x);
}

