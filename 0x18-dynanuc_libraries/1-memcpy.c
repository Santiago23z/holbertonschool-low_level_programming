# include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: copy destination
 * @src: pointer to data to copy
 * @n: number of bytes copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)

		dest[x] = src[x];

	return (dest);
}
