#include "main.h"
/**
* *_strchr - this is funtion main
* @s: this is a funtion
* @c: this is a c funcion
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
