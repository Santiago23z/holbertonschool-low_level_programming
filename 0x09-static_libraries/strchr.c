#include "main.h"

/**
 * _strchr - This function locates a character in a string
 * @s: The string to search on
 * @c: The characters on the string
 *
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{

int ctr = 0;

while (s[ctr] != '\0')
{
ctr++;
if (s[ctr] == c)
return (&s[ctr]);
}
return ('\0');
}
