#include "main.h"
#include <string.h>

/**
 * _memset - Function that fills a memory with a constant byte
 * @s: Starting address of memory to be filled
 * @b: Value to be filled
 * @n: Number of bytes to be filled starting from s to be filled
 * Return: string pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
