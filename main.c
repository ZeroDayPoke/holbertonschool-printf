#include "main.h"
#include <stdio.h>

int main(void)
{
	int count, count2;

	count2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	count = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	return (count2 - count);
}
