#include "lists.h"
/**
 *dlistint_len - counts number of elements in a linked list
 *@h: list of elements to count
 *Return: Number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
