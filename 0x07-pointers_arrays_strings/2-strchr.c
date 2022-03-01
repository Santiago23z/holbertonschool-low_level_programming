#include "main.h"

/**
* *_strchr - funcion que retorne llo
* @s: variable
* @c: variable
* Return: 0
*/
char *_strchr(char *s, char c)
{
int x;
for (x = 0; s[x] != '\0'; x++)
{
if (s[x] == c)
return (s + x);
}
return ('\0');
}
