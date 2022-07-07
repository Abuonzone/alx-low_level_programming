#include "main.h"
/**
 * more_numbers - Print 10 times  numbers from 0 - 14
 * Return: void
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;
		int k;

		for (j = 0; j <= 14; j++)
		{
			k = j / 10;
			if (k == 0)
			{
				_putchar(j + 48);
			}
			else
			{
				_putchar(k + 48);
				_putchar(j % 10 + 48);
			}
		}
		_putchar('\n');
	}
}
