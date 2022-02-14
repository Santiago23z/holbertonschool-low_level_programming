#include "main.h"
/**
 * main - imprimir _putchar
 * Return: Siempre 0
 */
int main(void)
{
	char c[]= "_putchar";
	int b;
	b= 0;
 	while (c[b] != '\0')
	{	
		_putchar(c[b]);
		b++;
	}
	_putchar('\n');
	return (0);
}
