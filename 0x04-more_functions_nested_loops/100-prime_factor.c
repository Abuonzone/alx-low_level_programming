#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int a = 0;
	long int b = 612852475143;

	while (a < 30)
	{
		float c = b / 2;

		printf("%.2f divided by 2\n",c);
		b = c;
		a++;
	}
}
