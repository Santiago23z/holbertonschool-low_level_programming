#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - for datatypes
 * @name: name to print
 * @type: pointer to the function to select what kind of pointer it is
 */

typedef struct print
{
	char *name;
	void (*type)(va_list ap);
} print_t;

void print_char(va_list ap);
void print_integer(va_list ap);
void print_float(va_list ap);
void print_s(va_list ap);
#endif
