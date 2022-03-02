#include "main.h"
#include <stdio.h>

/**
 *sqr_root - returns the natural sqare root of a number
 *@n: number being squared
 *@root: square root
 * Return: square root of the number
 */

int sqr_root(int n, int root)
{
	if (n == root * root)
		return (root);
	else if (n < root * root)
		return (-1);
	return (sqr_root(n, root + 1));
}

/**
 *_sqrt_recursion - returns the natural sqare root of a number
 *@n: number to square
 * Return: Square root of the number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqr_root(n, 0));
}
