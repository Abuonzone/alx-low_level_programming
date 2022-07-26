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
	int len = strlen(str);
	char *b;
	int i;

	b = malloc(sizeof(char) * len);
	if (b == NULL)
	{
		return (NULL);
	}
	
	i = 0;
	while (i < len)
	{
		b[i] = str[i];
		i++;
	}
	return (b);
}
