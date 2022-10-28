#include "main.h"

/**
 * _printf - prints to SO
 * @format: input args format string
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	int i = 0, j, totesWrite = 0, hcf_check;
	va_list varArg;
	_pcall betty[] = {{p_all_int, 'd'}, {p_all_int, 'i'}, {p_all_char, 'c'}, {p_all_str, 's'}};

	hcf_check = _hcf(format);
	if (hcf_check == -1)
		return (-1);
	va_start(varArg, format);
	while (format && format[i + 1])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				totesWrite += write_to_SO('%');
			}
			else
			{
				for (j = 0; betty[j].formChar; j++)
				{
					if (format[i + 1] == betty[j].formChar)
					{
						totesWrite += betty[j].fun(varArg);
					}
				}
			}
			i++;
		}
		else
		{
			totesWrite += write_to_SO(format[i]);
		}
		i++;
	}
	totesWrite += write_to_SO(format[i]);
	va_end(varArg);
	return (totesWrite);
}
