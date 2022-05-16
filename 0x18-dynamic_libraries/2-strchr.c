#include "main.h"

/**
 * _strchr - localiza un caracter en una cadena
 * @s: puntero
 * @c: caracter
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
int k;
for (k = 0; s[k] >= '\0'; k++)
{
if (s[k] == c)
return (&s[k]);
}
return ('\0');
}