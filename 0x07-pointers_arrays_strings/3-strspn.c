#include "main.h"
#include <string.h>

/**
 * _strspn - A Function that get the length of a prefix substring
 * @s: The string pointer
 * @c: The character to be located
 * Return: number of bytes
 */

char *_strchr(char *s, char *accept)
{
	return (strspn(s, accept));
}
