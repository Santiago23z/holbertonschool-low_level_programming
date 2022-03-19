#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - this is main funtion
 * @n: this is n
 * Return: the sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int c;
int sum = 0;
va_list l;

va_start(l, n);
for (c = 0; c < n; c++)
sum += va_arg(l, int);
va_end(l);
return (sum);
}
