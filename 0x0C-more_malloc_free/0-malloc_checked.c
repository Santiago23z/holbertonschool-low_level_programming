#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* malloc_checked - allocates memory using malloc
* @b: la memoria de asignacion
* Return: value 0
*/
void *malloc_checked(unsigned int b)
{
    unsigned int *arr;

    arr = malloc(sizeof(unsigned int) * b);
    return (arr);
}