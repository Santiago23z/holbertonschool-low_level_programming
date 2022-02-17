#include "main.h"

/**
 * print_square - una funcion que imprime un cuadrado de #
 * @size: size of size
 */
void print_square(int size)
{
	int l, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= size; l++)
		{
			_putchar('#');
			for (k = 2; k <= size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
