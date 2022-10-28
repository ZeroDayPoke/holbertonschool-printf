#include "main.h"

/**
 * _hcf - makes bad things happen if sadge format
 * @format: input format string
 * Return: -1 to exit 0 to go
 */
int _hcf(const char *format)
{
	int i = 0;

	if (format == NULL)
	{
		return (-1);
	}
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if ((format[i] != 'd' && format[i] != 'c'
			&& format[i] != 'i' && format[i] != 's' && format[i] != '%'))
			{
				return (-1);
			}
		}
	i++;
	}
	return (0);
}
