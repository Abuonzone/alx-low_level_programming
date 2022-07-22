#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: The string pointer
 * @needle: substring to be found in string haystack
 * Return: a pointer to the beginning of the located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
