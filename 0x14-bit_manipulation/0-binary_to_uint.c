#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts binary number to an unsigned integer
 * @b: string
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);
	else
	{
		int len = strlen(b);
		int i = len - 1;
		unsigned int decimal = 0;
		int base = 1;

		while (i >= 0)
		{
			if (b[i] == '0' || b[i] == '1')
			{
				if (b[i] == '1')
					decimal += base;
			}
			else
				return (0);
			base = base * 2;
			i--;
		}
		return (decimal);
	}
}
