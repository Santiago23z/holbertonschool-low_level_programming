#include "main.h"

/**
 * _memcpy - copy area of memory
 * @dest: pointer
 * @src: byte
 * @n: número de byte
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
