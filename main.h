#ifndef MAIN_H_
#define MAIN_H_

/*
 * libraries - to be included during compilation
 */
#include <unistd.h> /* includes write() function */
#include <stdlib.h> /* includes malloc() & free() */
#include <stdarg.h> /* includes va_functions */

/*
 * global variables declared below
 */
int totesWrite;

/**
 * _pcall - typedef of struct used to call write functions for _printf()
 * @fun: pointer to function to invoke when format character matches
 * @formChar: format character
 *
 * Description: utilizes paired void function pointers and characters
 */
typedef struct
{
	void (*fun)(va_list varArg);
	char formChar;
} _pcall ;

/*
 * prototypes - function protos below
 */
int _printf(const char *format, ...);
int write_to_SO(char c);
void write_int(int n);
void p_all_char(va_list chrArg);
void p_all_int(va_list intArg);
void p_all_str(va_list strArg);
void write_string(char *str);

#endif
