#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: variable
 * @index: index
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int bts;

bts = (n >> index) & 1;

if ((bts == 1) || (bts == 0))
{
return (bts);
}
else
return (-1);
}
