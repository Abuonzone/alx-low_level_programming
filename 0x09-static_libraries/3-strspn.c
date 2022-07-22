#include "main.h"
#include <string.h>

/**
 * _strspn - A Function that get the length of a prefix substring
 * @s: The string pointer
 * @accept: The character to be located
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
