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
	int i, j, k, l;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++);
	for (j = 0; s2[j] != '\0'; j++);

	s = malloc(sizeof(char) * (i + j + 1));

	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}

	for (l = 0; l <= (i + j); l++)
	{
		s[i + l] = s2[l];
	}
	return (s);
}
