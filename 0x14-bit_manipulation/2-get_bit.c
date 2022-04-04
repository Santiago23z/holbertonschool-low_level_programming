#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: variable
 * @index: index
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i, j;

if (index > (sizeof(unsigned int) * 8))
{
return (-1);
}
i = n >> index;
j = i & 1;
return (j);
}
