#include "main.h"
/**
 * flip_bits - Returns the number of bits you need
 * @n: variable
 * @m: variable
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int set;
int x;

set = (m ^ n);
x = 0;
while (set)
{
if (set & 1)
x++;
set = set >> 1;
}
return (x);
}
