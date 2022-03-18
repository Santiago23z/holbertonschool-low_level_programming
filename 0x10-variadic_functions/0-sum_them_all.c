#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - Sums all given parameters
 * @n: Number to sum
 * Return: the sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
va_list l;
unsigned int sum, i;
if (n == 0)
{
return (0);
}
sum = 0;
va_start(l, n);
for (i = 0; i < n; i++)
{
sum += va_arg(l, int);
}
va_end(l);
return (sum);
}
