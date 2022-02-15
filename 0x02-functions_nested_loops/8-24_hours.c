#include "main.h"

/**
 * jack_bauer - hora 24
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int hora;
	int min;

	for (hora = 0; hora < 24; hora++)
	for (min = 0; min < 60; min++)
	{
		_putchar((hora / 10) + '0');
		_putchar((hora % 10) + '0');
		_putchar(':');
		_putchar((min / 10) + '0');
		_putchar((min % 10) + '0');
		_putchar('\n');
	}
}
