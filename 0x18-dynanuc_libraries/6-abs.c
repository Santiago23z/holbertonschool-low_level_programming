#include "main.h"
#include "stdio.h"

/**
 * _abs - computers the absolute value.
 * @n: the integrar to be computed.
 *
 * Return: the abslute value of the integer.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
