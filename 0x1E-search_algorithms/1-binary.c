#include "search_algos.h"

/**
 * binary_search - Searches for an element in a sorted array of integers
 * @array: Array of integers
 * @size: Size of the array
 * @value: Value to search for
 * Return: Index of the element or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    size_t start, end, i;

    if (array == NULL || size == 0)
        return (-1);

    for (start = 0, end = size - 1; end >= start;)
    {
        printf("Searching in array: ");
        for (i = start; i < end; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);

        i = (start + end) / 2;
        if (array[i] == value)
            return (i);
        else if (array[i] < value)
            start = i + 1;
        else
            end = i - 1;
    }
    return (-1);
}