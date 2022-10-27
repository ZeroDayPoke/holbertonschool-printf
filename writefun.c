#include "main.h"

int _writechar(char c)
{
	return (write(1, &c, 1));
}

int _writeint(int i)
{
	return (write(1, &i, 4));
}
