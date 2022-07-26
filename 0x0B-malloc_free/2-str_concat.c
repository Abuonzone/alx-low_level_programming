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
	char *s3;
	char s4[] = strcat(s1, s2);
	unsigned int i;

	if (strcat(s1, s2) == NULL)
	{
		return ("");
	}

	s3 = malloc(sizeof(char) * (strlen(s1) + strlen(s2)));
	if (s3 == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < strlen(s4))
	{
		s3[i] = s4[i];
		i++;
	}
	return (s3);
}
