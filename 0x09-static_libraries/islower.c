int _islower(int c);
#include "main.h"

/**
 * _islower - main
 * @c: variable
 * Return: 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}