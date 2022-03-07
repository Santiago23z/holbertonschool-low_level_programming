#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* create_array - creates an array of chars.
* @size: tamaño de la memoria para imprimir
* @c: a imprimir
* Return: a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int a;

if (size == 0)
return (NULL);
if (size != 0)
{
array = (char *)malloc(size * sizeof(char));
if (array != NULL)
{
for (a = 0; a < size; a++)
array[a] = c;
a++;
}
}
return (array);
}
