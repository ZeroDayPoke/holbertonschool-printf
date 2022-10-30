#ifndef MAIN_H_
#define MAIN_H_

/*
 * libraries - to be included during compilation
 */
#include <unistd.h> /* includes write() function */
#include <stdlib.h> /* includes malloc() & free() */
#include <stdarg.h> /* includes va_functions */

/**
 * _pcall - typedef of struct used to call write functions for _printf
 * @fun: pointer to function to invoke when format character matches
 * @formChar: format character
 *
 * Description: utilizes paired int function pointers and characters
 */
typedef struct
{
	int (*fun)(va_list varArg);
	char formChar;
} _pcall;

/*
 * prototypes - function protos below
 */
int _printf(const char *format, ...);
int p_all_char(va_list chrArg);
int p_all_int(va_list intArg);
int p_all_str(va_list strArg);
int write_to_SO(char c);
int write_int(int n);
int write_string(char *str);

#endif
