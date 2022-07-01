#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 'a';

	for (; n <= 'z'; n++)
	{
		if (n == 'e')
			continue;
		else if (n == 'q')
			continue;
		putchar(n);

	}
	putchar('\n');
	return (0);
}
