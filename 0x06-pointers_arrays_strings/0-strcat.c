#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenate two strings
 * @dest: Parameter 1
 * @src: Parameter 2
 * Return: character
 */

char *_strcat(char *dest, char *src)
{
	size_t n = 32;
	size_t str_len = strlen(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[str_len + i] = src[i];
	}
	dest[str_len + i] = '\0';

	return (dest);
}
