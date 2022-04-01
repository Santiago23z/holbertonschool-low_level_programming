#include "lists.h"

/**
 * pop_listint - delete the node
 * @head: cabecera, first node
 * Return: 0
 */
int pop_listint(listint_t **head)
{
listint_t *new;
int e;

if (!*head || !head)
return (0);
e = (*head)->n;
new = (*head)->next;
free(*head);
*head = new;

return (e);
}
