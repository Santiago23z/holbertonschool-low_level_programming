#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 *
 * @h: First node
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	
	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
