#include "main.h"

/**
 * p_all_char - prints chars from _printf va_list
 * @chrArg: inbound chrArg
 * Return: chars printed
 */
int p_all_char(va_list chrArg, unsigned int n)
{
	int totesWrite = 0;

	totesWrite += write_to_SO(va_arg(chrArg, int));
	(void)n;
	return (totesWrite);
}

/**
 * p_all_int - prints ints from _printf va_list
 * @intArg: inbound intArg
 * Return: chars printed
 */
int p_all_int(va_list intArg, unsigned int n)
{
	int totesWrite = 0;

	totesWrite += write_int(va_arg(intArg, int));
	(void)n;
	return (totesWrite);
}

/**
 * p_all_str - prints strings from _printf va_list
 * @strArg: inbound strArg
 * Return: chars printed
 */
int p_all_str(va_list strArg, unsigned int n)
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
	(void)n;
	return (totesWrite);
}

/**
 * p_all_bin - prints binary to SO
 * @n: uint to convert
 * Return: void
 */
int p_all_bin(va_list binArg, unsigned int n)
{
	int totesWrite = 0;
	unsigned int x;

	x = va_arg(binArg, int);
	totesWrite += write_bin_to_SO(x);
	(void)n;
	return (totesWrite);
}
