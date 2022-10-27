#ifndef MAIN_H_
#define MAIN_H_

/*
 * libraries - to be included
 */
#include <unistd.h> /* includes write() function */
#include <stdlib.h> /* includes malloc() & free() */
#include <stdarg.h> /* includes va_functions */

/**
 * _printf_void_call - vel'koz approved
 * @fun: pointer to fun to print associated type
 *
 * Description: begin ritual of doom
 */
struct _printf_void_call
{
	void (*fun)(va_list varArg);
};
typedef struct _print_void_call _pcall;

/*
 * prototypes - function protos below
 */
int _printf(const char *format, ...);
int write_to_SO(char c);
void write_int(int n);

#endif
