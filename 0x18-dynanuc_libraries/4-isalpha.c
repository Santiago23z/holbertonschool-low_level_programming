#include "main.h"

/**
 * _isalpha - function checks for alphabetic.
 *
 * @c: character.
 *
 * Return: 1. if c is a letter, lowercase or uppercase.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
