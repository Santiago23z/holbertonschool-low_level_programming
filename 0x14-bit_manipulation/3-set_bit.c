#include "main.h"
/**
 * set_bit - sets the value of the bit to 1 at a given index
 * @n: puntero a binario
 * @index: dar indice a numero
 * Return: 1 si sale bueno, -1 si es fallado
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (n == NULL || (index > ((sizeof(unsigned long int) * 8) - 1)))
{
return (-1);
}
*n = (*n | (1 << index));
return (1);
}
