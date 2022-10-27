#include "main.h"

/**
 * write_string - writes string to SO
 * @str: pointer input to string
 * Return: void
 */
void write_string(char *str)
{
	int a = 0;

	while (*(str + a) != '\0')
	{
		write_to_SO(*(str + a));
		a++;
	}
}
