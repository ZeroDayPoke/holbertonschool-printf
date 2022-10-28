#include "main.h"

/**
 * _hcf - makes bad things happen if sadge format
 * @format: input format string
 * Return: -1 to exit 0 to go
 */
int _hcf(const char *format)
{
	int i = 0;

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != 'd' && format[i + 1] != 'c' && format[i + 1] != 'i' &&
			format[i + 1] != 's' && format[i + 1] != '%')
			{
				return (-1);
			}
		}
	i++;
	}
	return (0);
}
