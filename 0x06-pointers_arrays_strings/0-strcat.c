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
	return (strcat(*dest, *src));
}
