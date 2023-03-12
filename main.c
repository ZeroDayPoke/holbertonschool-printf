#include "main.h"
#include <stdio.h>

int main(void)
{
	int count;

	count = _printf("%b", 0);
	printf("0");
	return (count);
}
