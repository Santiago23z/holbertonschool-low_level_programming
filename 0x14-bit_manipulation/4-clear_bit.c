#include "main.h"
/**
 * clear_bit - sets the value of a bit
 * @n: variable
 * @index: index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int select;

if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
{
return (-1);
}
select = 1 << index;
select = ~select;
*n = (*n & select);
return (1);
}
