#include "main.h"

/**
 * print_chessboard - Print the chessboard
 * @a: Two dimensional array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	int row = sizeof(*a) / sizeof(*a[0]);
	int column = sizeof(*a[0]) / sizeof(*a[0][0]);

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
