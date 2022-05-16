#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: appen string src
 * @src: appen string dest
 * @n: bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
