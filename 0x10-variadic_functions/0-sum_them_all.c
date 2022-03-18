#include "variadic_functions.h"

/**
 * sum_them_all - Function that return the sum
 * @n: variable
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int c;
int h = 0;
va_list l;

va_start(l, n);
if (n == 0)
{
return (0);
}
for (c = 0; c < n; c++)
h += va_arg(l, int);

va_end(l);
return (h);
}
