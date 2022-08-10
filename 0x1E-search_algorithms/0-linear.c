#include <stdio.h>
#include "search.h"
/**
 *
 * linear_search - Write a function that searches
 * for a value in an array of integers
 *
 * @param array
 * @param size
 * @param value
 * Return: int
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i <= size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
