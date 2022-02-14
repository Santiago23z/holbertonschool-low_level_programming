#include "main.h"

/**
 * main - existencia de minusculas
 * 
 * Return: 0
 */
int _islower(int d)
{
	if (d >= 'a' && d <= 'z')
		return (1);
	else
		return (0);
}
