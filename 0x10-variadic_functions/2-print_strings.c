#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings
 *@separator: The string to be printed between functions
 *@n: Number of integers passed through the function
 * Return: The strings passed through the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *a;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(ap, char *);
		if (a == NULL)
			printf("(nil)");
		else
			printf("%s", a);
		if ((separator != NULL) && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
