#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - Función que imprime un nombre.
 * @name: Nombre a imprimir
 * @f: función.
 * if (name != NULL && f != NULL)
 * if (!name && !f)
 * Son otras 2 formas de que corra el ejercicio
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
(f)(name);
}