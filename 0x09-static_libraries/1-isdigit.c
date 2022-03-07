#include "main.h"

/**
 * _isdigit - del 1 al 9
 * @b: variable
 * Return: de 1 de lo contrario de 0
 */
int _isdigit(int b)
{
	if ((b >= '0') && (b <= '9'))
	{
		return (1);
	}
	else
		return (0);
}
