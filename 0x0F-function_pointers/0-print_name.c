#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - f points to either func in main
 * @name: variable
 * @f: Puntero donde guardaremos name
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}