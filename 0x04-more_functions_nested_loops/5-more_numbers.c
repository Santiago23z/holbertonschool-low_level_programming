#include "main.h"

/**
 * more_numbers - imprime los numeros del 1 al 14 10 veces
 * Return: 0-14
 */
void more_numbers(void)
{
	int i, u;

	for (u = 0; u < 10; u++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
	_putchar('\n');
}
}
