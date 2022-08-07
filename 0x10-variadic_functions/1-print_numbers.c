#include "variadic_functions.h"

/**
 * print_numbers - Function that print numbers, followed by a new line
 * @separator: string param
 * @n: param
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *sep = separator;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%u", va_arg(ap, const unsigned int));
		if (i < n - 1)
		{
			printf("%s", sep);
		}
	}
	va_end(ap);
	_putchar(' ');
}

