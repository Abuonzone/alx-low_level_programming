#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches for a string for any of a set of bytes
 * @s: The string pointer
 * @accept: The character to be searched
 * Return: a pointer to the string s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
