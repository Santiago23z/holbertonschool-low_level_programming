#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: cabecera
 * Return: 0
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;

if (head == NULL)
return;
while (*head != NULL)
{
tmp = *head;
*head = tmp->next;
free(tmp);
}
*head = NULL;
}
