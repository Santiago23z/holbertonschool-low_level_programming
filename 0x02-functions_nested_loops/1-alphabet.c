#include "main.h"

/**
 * I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
 *
 * Return: Always 0 
 */
void print_alphabet(void)
{
	int santi;

	for (santi = 'a'; santi <= 'z'; santi++)
	{
		_putchar(santi);
	}
	_putchar('\n');
}
