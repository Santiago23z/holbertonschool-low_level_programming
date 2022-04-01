#include "lists.h"

/**
 * free_listint - function that frees a listint_t
 * @head: cabecera
 * Return: 0
 */
void free_listint(listint_t *head)
{
if (head == NULL)
return;
while (head != NULL)
{
free(head);
}
}
