#include "main.h"

/**
 * p_all_char - prints chars from _printf va_list
 * @chrArg: inbound chrArg
 * Return: chars printed
 */
int p_all_char(va_list chrArg)
{
	int totesWrite = 0;

	totesWrite += write_to_SO(va_arg(chrArg, int));
	return (totesWrite);
}

/**
 * p_all_int - prints ints from _printf va_list
 * @intArg: inbound intArg
 * Return: chars printed
 */
int p_all_int(va_list intArg)
{
	int totesWrite = 0;

	totesWrite += write_int(va_arg(intArg, int));
	return (totesWrite);
}

/**
 * p_all_str - prints strings from _printf va_list
 * @strArg: inbound strArg
 * Return: chars printed
 */
int p_all_str(va_list strArg)
{
	int totesWrite = 0;
	char *charArr;

	charArr = va_arg(strArg, char *);
	if (charArr == NULL)
	{
		totesWrite += write_to_SO('(');
		totesWrite += write_to_SO('n');
		totesWrite += write_to_SO('u');
		totesWrite += write_to_SO('l');
		totesWrite += write_to_SO('l');
		totesWrite += write_to_SO(')');
		return (totesWrite);
	}
	totesWrite += write_string(charArr);
	return (totesWrite);
}
