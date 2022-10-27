#include "main.h"

int write_to_SO(char c)
{
	return (write(1, &c, 1));
}
