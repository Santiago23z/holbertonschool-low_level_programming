#include "main.h"
/**
 * print_sign - main
 * @z: variable
 * Return: siempre 0
 */
int print_sign(int z)
{
	if (z > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (z == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
