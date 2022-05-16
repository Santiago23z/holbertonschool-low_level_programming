#include "main.h"
#include <stdio.h>

/**
 * _isdigit - función que verifique un dígito
 * @c: to be evaluated
 * Return: ´dígito verificado
 */
int _isdigit(int c)
{
if ((c >= '0') && (c <= '9'))
{
return (1);
}
else
{
return (0);
}
}