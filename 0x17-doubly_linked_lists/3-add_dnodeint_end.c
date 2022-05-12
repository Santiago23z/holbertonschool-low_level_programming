#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: pointer
 * @n: pointer
 * Return: void
 *
 */
dlistint_t *add_nodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *i, *l;

	i = malloc(sizeof(dlistint_t));

	if (i == NULL)
		return (NULL);

	i->n = n;
	i->next = NULL;

	if (*head == NULL)
		*head = i;
	else
	{
		l = *head;
		while (l->next != NULL)

			l = l->next;
		l->next = i;
	}
	return (*head);
}
