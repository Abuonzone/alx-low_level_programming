#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * leet - A functions that encodes a string
 * @n: string pointer parameter
 * Return: char
 */

char *leet(char *n)
{
	int i, x;
	int low_letter[] = {97, 101, 111, 116, 108};
	int up_letter[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};
	int n_len = strlen(n);
	int in_len = sizeof(numbers) / sizeof(int);

	for (i = 0; i < in_len; i++)
	{
		for (x = 0; x < n_len && n[x] != '\0'; x++)
		{
			if (n[x] == low_letter[i] || n[x] == up_letter[i])
			{
				n[x] = numbers[i];
			}
		}
	}
	return (n);
}
