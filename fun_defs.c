#include "main.h"

/**
 * p_all_char - prints chars from _printf va_list
 * @chrArg: inbound chrArg
 * Return: chars printed
 */
int p_all_char(va_list chrArg)
{
	return (write(STDOUT_FILENO, chrArg, 1));
}

int p_all_mod(void)
{
	return (write(STDOUT_FILENO, "%", 1));
}

/**
 * p_all_int - prints ints from _printf va_list
 * @intArg: inbound intArg
 * Return: chars printed
 */
int p_all_int(va_list intArg)
{
	return (write_int(va_arg(intArg, int)));
}

/**
 * p_all_str - prints strings from _printf va_list
 * @strArg: inbound strArg
 * Return: chars printed
 */
int p_all_str(va_list strArg)
{
	char *charArr, *null_msg = "(null)";

	charArr = va_arg(strArg, char *);
	if (charArr == NULL)
		return (write(STDOUT_FILENO, null_msg, strlen(null_msg)));
	return (write(STDOUT_FILENO, charArr, strlen(charArr)));
}

int p_all_bin(va_list binArg)
{
    unsigned int num = va_arg(binArg, int), wrt_std = 0;
	int i = 31, flag = 0;
	char c;

	if (num == 0)
		return (write(STDOUT_FILENO, "0", 1));
    for (i = 31; i >= 0; i--)
	{
		c = (char)(((num >> i) & 1) + '0');
		if (c != '1' && flag != 1)
		{
			continue;
		}
		flag = 1;
        wrt_std += write(STDOUT_FILENO, &c, 1);
	}
	return (wrt_std);
}
