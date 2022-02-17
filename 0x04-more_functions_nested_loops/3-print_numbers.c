#include "main.h"

/**
 * print_numbers - imprimir numeros del 0 al 9
 * @i
 * Return: 0
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
		_putchar(i);
	_putchar('\n');
}
