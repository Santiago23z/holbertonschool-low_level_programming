#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all of its parameters
 *@n: Number of arguments in the function
 * Return: The sum of all of the arguments passed or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(arguments, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arguments, int);
	}
	va_end(arguments);
	return (sum);
}
