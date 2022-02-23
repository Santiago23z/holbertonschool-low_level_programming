#include "main.h"

/**
 * _strcat - una funcion que concatene dos cadenas
 * @dest: cadena 1
 * @src: cadena 2
 * Return: combinar dos cadenas
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, g;
    

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (g = 0; ((dest[i + g] = *src++) != '\0') && (g < n-1); g++)
	{
	}
	return (dest);
}