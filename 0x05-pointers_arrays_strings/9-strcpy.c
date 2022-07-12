#include "main.h"
#include <string.h>

/**
 * _strcpy - Copy one string to another
 * @dest: string parameter 1
 * @src: string parameter 2
 * Return: pointer to char;
 */

char *_strcpy(char *dest, char *src)
{
	return (strcpy(*dest, *src));
}
