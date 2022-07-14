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
	int i;
	int str_len = strlen(n);

	for (i = 0; i < strlen(n); i++)
	{
		if(!(isupper(n[i])))
		{
			n[i] = isupper(n[i]);
		}
	}
	return (n);
}


