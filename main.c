#include "main.h"
#include <stdio.h>

int main(void)
{
	int count, count2;

	count2 = printf(NULL);
	count = _printf(NULL);
	return (count2 - count);
}
