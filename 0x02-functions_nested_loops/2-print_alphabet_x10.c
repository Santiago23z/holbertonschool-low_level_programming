#include "main.h"
/**
 * main - alfabeto x10
 *
 * Return: x10 
 */
void print_alphabet_x10(void)
{
	int oe, s;

	s = 0;

	while (s < 10)
	{
		for (oe = 'a'; oe <= 'z'; oe++)
		{
			_putchar(oe);
		}
		s++;
		_putchar('\n');
	}
}
