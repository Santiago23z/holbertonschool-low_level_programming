#include "function_pointers.h"

/**
* print_name -  function that prints a name
* @name: string
* @f: function
* Return: value 0
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
