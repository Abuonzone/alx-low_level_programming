#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - Function that print numbers, followed by a new line
 * @separator: string param
 * @n: param
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1)
		{
			if (separator == NULL || separator[0] == '\0')
			{
				continue;
			}
			else
				printf("%c ", separator[0]);
		}
	}
	va_end(ap);
	printf("\n");
}

