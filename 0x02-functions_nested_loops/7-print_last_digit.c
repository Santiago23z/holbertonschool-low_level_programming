#include "main.h"
/**
 * print_last_digit - una funcion que imprime el ulitmo numero
 * @n: variable
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int rd;

	rd = (n % 10);

	if (rd < 0)
	{
		rd = (-1 * rd);
	}

	_putchar(rd + 48);
	return (rd);
}
