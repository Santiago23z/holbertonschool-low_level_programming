#include "main.h"
#include <stdio.h>
/**
 * print_line - imprimir dos lineas
 * @n: variable
 * Return: 0
 */
void print_line(int n)
{

	while (n > 0)
	{
		_putchar('_');
		n--;
	}
_putchar('\n');
}
