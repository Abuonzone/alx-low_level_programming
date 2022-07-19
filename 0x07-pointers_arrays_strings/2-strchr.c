#include "main.h"
#include <string.h>

/**
 * _strchr - A Function that locates a character in a string
 * @s: The string pointer
 * @c: The character to be located
 * Return: char pointer
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
