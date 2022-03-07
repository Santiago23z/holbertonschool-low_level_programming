#include "main.h"

/**
 * _puts - funcion que imprime un string
 * @str: string
 * Return: string
 */
void _puts(char *str)
{
	int r;

	for (r = 0; str[r] != '\0'; r++)
	{
		_putchar(str[r]);
	}
	_putchar('\n');
}
