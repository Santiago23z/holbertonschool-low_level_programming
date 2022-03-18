#include "function_pointers.h"

/**
* print_name -  function that prints a name
* @name: string
* @f: pointer
* Return: value 0
*/

void print_name(char *name, void (*f)(char *))
{
if (f)
{
(*f)(name);
}
}