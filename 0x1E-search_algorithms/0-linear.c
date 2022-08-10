#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array.
 *
 * @array: pointer to the first element of the array.
 * @size: is the number of elements in array.
 * @value: is the value to search for
 *
 * Description: searchs for a given value using linear search
 * algorithm.
 *
 * Return:  the index where the value is at or -1 if couldn't be found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}