#include "main.h"
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
	int i;
	unsigned int ans = 0;
	int len = strlen(b);
	int base = 1;

	if (b == NULL)
		return (0);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
				ans += base;
		}
		else
			return (0);
		base = base * 2;
	}
	return (ans);
}
