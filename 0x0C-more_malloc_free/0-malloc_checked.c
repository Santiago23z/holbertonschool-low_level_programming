#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - Entry Point
 * @b: input amount
 * Return: pointer to new mem
 */
void *malloc_checked(unsigned int b)
{
    unsigned int *arr;

    arr = malloc(sizeof(unsigned int) * b);
    if (!arr)
    {
        exit(98);
    }

    return (arr);
}