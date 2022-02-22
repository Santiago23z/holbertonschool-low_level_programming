#include "main.h"

/**
 * print_array -Escriba una función que imprima n elementos
 *@a: variable
 *@n: variable
 * Return: print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");

}
