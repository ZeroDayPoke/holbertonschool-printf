#include "main.h"

/**
 * _printf - prints supported formats to SO
 * @format: input args format string
 * Return: number of chars printed or -1 on fail
 */
int _printf(const char *format, ...)
{
	int i = 0, wrt_cnt = 0;
	pf_t betty[] = {{p_all_str, 's'}, {p_all_char, 'c'}, {p_all_int, 'i'},
	{p_all_int, 'd'}, {p_all_bin, 'b'}, {NULL, '\0'}};
	va_list args;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				wrt_cnt += p_all_mod();
				format++;
				continue;
			}
			for (i = 0; betty[i].formChar; i++)
			{
				if (betty[i].formChar == *format)
				{
					wrt_cnt += betty[i].fun(args);
					break;
				}
			}
			if (!betty[i].formChar)
			{
				wrt_cnt += write(STDOUT_FILENO, "%", 1);
				wrt_cnt += write(STDOUT_FILENO, format, 1);
			}
		}
		else
			wrt_cnt += write(STDOUT_FILENO, format, 1);
		format++;
	}
	va_end(args);
	return (wrt_cnt);
}
