#include "main.h"

/**
 * _isupper - escriba funcion si el caracter es mayuscula
 * @c: variable
 * Return: 1 si es mayuscula de lo contrario 0
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
