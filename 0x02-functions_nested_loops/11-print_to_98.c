#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - init
 * @n: variable
 * Return: siempre 0
 */

void print_to_98(int n)
{
if (n <= 98)
{
for (n = 0; n <= 97 ; n++)
printf("%d, ", n);
}
else
for (n = 0; n > 97; n--)
printf("%d, ", n);
printf("98\n");
}
