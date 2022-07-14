#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * string_toupper(char *)
 * @n: parameter
 * Return: char
 */

char *string_toupper(char *n)
{
	size_t i;
	size_t str_len = strlen(n);

	for (i = 0; i < strlen(n); i++)
	{
		if(!(isupper(n[i])))
		{
			n[i] = toupper((unsigned char) n[i]);
		}
	}
	return (n);
}


