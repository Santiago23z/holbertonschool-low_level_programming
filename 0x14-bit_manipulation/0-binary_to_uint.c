#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: const char
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int by = 0;
int t;

if (!b)
{
return (0);
}
for (t = 0; b[t] != '\0'; t++)
{
if (b[t] != '0' && b[t] != '1')
return (0);
}
for (t = 0; b[t] != '\0'; t++)
{
by <<= 1;
if (b[t] == '1')
by += 1;
}
return (by);
}
