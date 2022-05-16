#include "main.h"
#include <stdio.h>

/**
 * _isupper - chequear mayúscula o minúscula
 * @c: to be evaluated
 * Return: salida 1 con mayúscula
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
{
		return (1);
}
else
{
	return (0);
}
}
