#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - concatenate all arguments of the program
 * @ac: argument count parameter
 * @av: argument vector parameter
 * Return: Null if it faills
 */

char *argstostr(int ac, char **av)
{
	int i, j, x;
	int n = 0;
	char *str;

	if (ac == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; av[i][j] != '\0'; j++)
		{
			n++;
		}
		n++;
	}
	str = malloc((n + 1) * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = j = x = 0; x < n; j++, x++)
	{
		if (av[i][j] == '\0')
		{
			str[x] = '\n';
			i++;
			x++;
			j = 0;
		}
		if (x < (n - 1))
		{
			str[x] = av[i][j];
		}
	}
	str[x] = '\0';
	return (str);
}
