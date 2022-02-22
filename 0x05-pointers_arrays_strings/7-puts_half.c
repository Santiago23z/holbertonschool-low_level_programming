#include "main.h"

/**
 * puts_half - function should print only la mitad
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts_half(char *str)
{
int a, b, k;
k = 0;
for (a = 0; str[a] != '\0'; a++)
k++;
b = (k / 2);
if ((k % 2) == 1)
b = ((k + 1) / 2);
for (a = b; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar('\n');
}
