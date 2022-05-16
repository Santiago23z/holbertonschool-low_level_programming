#include "main.h"

/**
 * *_strcpy - string pointed
 * @dest: pointer to by dest
 * @src: string ponted to by src
 *
 * Return: value (pointer to dest)
 */
char *_strcpy(char *dest, char *src)
{
	int p = 0;

	while (*(src + p) != '\0')
	{
		*(dest + p) = *(src + p);

		p++;
	}

	*(dest + p) = '\0';

	return (dest);
}
