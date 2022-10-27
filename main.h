#ifndef MAIN_H_
#define MAIN_H_

/*
 * libraries - to be included
 */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

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
int _writechar(char c);
int _writeint(int i);

#endif
