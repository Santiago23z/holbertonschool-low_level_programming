# include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: bytes of the memory area pointed to by
 * @b: whit the constant byte
 * @n: pointer to memory
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)

		s[x] = b;

	return (s);
}
