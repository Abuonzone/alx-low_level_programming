#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate two strings
 * @s1: string parametre
 * @s2: string parameter
 * Return: Null on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i;

	strcat(s1, s2)
	s = (char *)malloc(sizeof(char) * (strlen(s1) + 1));
	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < strlen(s1))
	{
		s[i] = s1[i];
		i++;
	}
	return (s);
}
