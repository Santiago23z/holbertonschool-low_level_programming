#include "lists.h"

/**
 * insert_nodeint_at_index - function
 * that inserts a new node at a given position.
 * @head: cabecera
 * @idx: count of nodes
 * @n: data of node
 * Return: null if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int index = 0;
listint_t *new;
listint_t *tmp = *head;

new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
while (tmp)
{
if (index == idx - 1)
{
new->next = tmp->next;
tmp->next = new;
return (new);
}
tmp = tmp->next;
index++;
}
return (NULL);
}
