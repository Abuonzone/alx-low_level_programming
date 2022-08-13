#include <stdio.h>

/**
 * myStartup - entry point
 * Return: 0
 */
void myStartup (void) __attribute__ ((constructor));
void myStartup(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
