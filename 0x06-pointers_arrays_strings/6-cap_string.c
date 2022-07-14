#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - change string to uppercase
 * @n: parameter
 * Return: char
 */

char *cap_string(char *n)
{
	size_t i;
	size_t str_len = strlen(n);

	for (i = 0; i < str_len; i++)
	{
		if (!(isupper(n[i])))
		{
			n[i] = towupper((unsigned char) n[i]);
		}
	}
	return (n);
}


