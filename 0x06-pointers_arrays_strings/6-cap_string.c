#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - change string to uppercase
 * @n: parameter
 * Return: char
 */

char *cap_string(char *n)
{
	int i, x;
	int n_len = strlen(n);
	int str[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int str_len = sizeof(str) / sizeof(int);

	for (x = 1; x < str_len && str[x] != '\0'; x++)
	{
		for (i = 0; i < n_len && n[i] != '\0'; i++)
		{
			if (n[i] == ' ')
				n[i + 1] = toupper((unsigned char) n[i + 1]);
			if (n[i] == str[x] && n[i + 1] != ' ')
			{
				n[i + 1] = toupper((unsigned char) n[i + 1]);
			}
		}
	}
	return (n);
}


