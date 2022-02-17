#include "main.h"

/**
 * print_diagonal - diagonal line
 * @n: variable
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int y, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 1; y <= n; y++)
		{
			for (sp = 1; sp < y; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
