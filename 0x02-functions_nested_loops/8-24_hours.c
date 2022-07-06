#include "main.h"
/**
 * jack_bauer - Print every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int a, b, c, d, e;

	for (a = 0; a <= 2; a++)
	{
		if (a == 2)
		{
			for (b = 0; b < 4; b++)
			{
				for (c = 0; c < 6; c++)
				{
					for (d = 0; d <= 9; d++)
					{
						e = b % 10;
						_putchar(a + 48);
						_putchar(e + 48);
						_putchar(':');
						_putchar(c + 48);
						_putchar(d + 48);
						_putchar('\n');
					}
				}
			}
		}
		else
		{
			for (b = 0; b <= 9; b++)
			{
				for (c = 0; c < 6; c++)
				{
					for (d = 0; d <= 9; d++)
					{
						e = b % 10;
						_putchar(a + 48);
						_putchar(b + 48);
						_putchar(':');
						_putchar(c + 48);
						_putchar(d + 48);
						_putchar('\n');
					}
				}
			}
		}
	}
}
