#include "main.h"

/**
 * p_all_char - prints chars from _printf
 * @chrArg: inbound chrArg
 * Return: just prints to SO
 */
void p_all_char(va_list chrArg)
{
	write_to_SO(va_arg(chrArg, int));
}

/**
 * p_all_int - prints ints from _printf
 * @intArg: inbound intArg
 * Return: just prints to SO
 */
void p_all_int(va_list intArg)
{
	write_int(va_arg(intArg, int));
}

/**
 * p_all_str - prints strings from print_all
 * @strArg: inbound strArg
 * Return: just prints to SO
 */
void p_all_str(va_list strArg)
{
	char *charArr;

	charArr = va_arg(strArg, char *);
	write_string(charArr);
}