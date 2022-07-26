#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: String pointer
 * Return: Null if str = Null
 */

char *_strdup(char *str)
{
	char *b;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	b = malloc(sizeof(char) * (strlen(str) + 1));
	if (b == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < strlen(str))
	{
		b[i] = str[i];
		i++;
	}
	return (b);
}
