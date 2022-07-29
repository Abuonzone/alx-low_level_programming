#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * strtow - splits a string into words
 * @str: sring parameter
 * Return: a pointer to an array of strings(words)
 */

char **strtow(char *str)
{
	char **strings;
	int i, j, k, n;

	if (str == NULL || str == "")
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	strings = malloc(sizeof(char *));
	if (strings == NULL)
	{
		free(strings);
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		strings[j] = malloc(sizeof(char *));
		if (strings[j] == NULL)
		{
			for (j--; j >= 0; j--)
				free(strings[j]);
			free(strings);
			return (NULL);
		}
	}

	for (j = k = n = 0; n < i; k++, n++)
	{
		if (str[n] != '' || str[n] != '\t')
		{
			strings[j][k] = str[n];
		}
		if (str[n] == '' || str[n] == '\t')
		{
			j++;
			k = 0;
			continue;
		}
	}
	return (strings);
}
