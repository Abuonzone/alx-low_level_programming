#ifndef MAINA_H
#define MAINA_H

#include <unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#endif
