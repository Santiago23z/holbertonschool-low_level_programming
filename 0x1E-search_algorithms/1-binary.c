#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located, -1 if is not present
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, R = size - 1;
	int index, size_print = size;

	if (!array || size == 0)
		return (-1);
	while (i <= R)
	{
		print_array(array, i, size_print);
		index = ((R - i) / 2) + i;
		if (array[index] < value)
			i = index + 1;
		else if (array[index] > value)
		{
			R = index - 1;
			size_print = index;
		}
		else
			return (index);
	}
	return (-1);
}

/**
 * print_array - print the array being searched every time it changes
 * @array: array to be printed
 * @init: index where start to print the array
 * @end: index where end to print the array
 */
void print_array(int *array, int init, int end)
{
	int j;

	printf("Searching in array: ");
	for (j = init; j < end; j++)
		if (j != end - 1)
			printf("%i, ", array[j]);
		else
			printf("%i\n", array[j]);
}

