#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenate two strings
 * @dest: Parameter 1
 * @src: Parameter 2
 * @n: Parameter 3
 * Return: character
 */

char *_strncat(char *dest, char *src, int n)
{
	int str_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[str_len + i] = src[i];
	}
	dest[str_len + i] = '\0';

	return (dest);
}
