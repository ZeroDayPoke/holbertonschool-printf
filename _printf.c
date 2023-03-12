#include "main.h"

/**
 * _printf - prints supported formats to SO
 * @format: input args format string
 * Return: number of chars printed or -1 on fail
 */
int _printf(const char *format, ...)
{
	int i = 0, wrt_cnt = 0;
	_pcall betty[] = {
    {p_all_str, 's'},
    {p_all_char, 'c'},
    {p_all_int, 'i'},
    {p_all_int, 'd'},
    {p_all_bin, 'b'},
	{NULL, '\0'}};
	va_list args;

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
			i = 0;
            for (; betty[i].formChar; i++)
			{
                if (betty[i].formChar == *format)
				{
                    wrt_cnt += betty[i].fun(args);
                    break;
                }
            }
        }
		else
            wrt_cnt += write(STDOUT_FILENO, format, 1);
        format++;
    }
    va_end(args);
	return (wrt_cnt);
}
