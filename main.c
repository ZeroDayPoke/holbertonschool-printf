#include "main.h"
#include <stdio.h>

int main(void)
{
	int retVal = 0;
	int retVal2 = 0;

	retVal = _printf("%s", "test");
	retVal2 = printf("%s", "test");
	printf("\n%d%d\n", retVal, retVal2);
	return (0);
}
