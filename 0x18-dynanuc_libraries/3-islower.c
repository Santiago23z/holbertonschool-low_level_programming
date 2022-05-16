#include "main.h"

/**
 * _islower - function that checks for lowercase character.
 *
 * @c: character
 *
 * Return: 1. character is loercase.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
