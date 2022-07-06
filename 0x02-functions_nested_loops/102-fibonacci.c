#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (success)
 */
int fibonacci(int n)
{
	int a[51];
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i == 0)
			continue;
		if (i == 1)
		{
			a[i] = i;
			printf("%d, ", a[i]);
		}
		else
		{
			a[i] = a[i-1] + a[i-2];
			printf("%d, ", a[i]);
		}
	}
	return a[n];
}

int main(void)
{
	fibonacci(50);
	return (0);
}
