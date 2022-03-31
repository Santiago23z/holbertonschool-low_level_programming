#include "lists.h"
/**
 * add_nodeint - a function that adds a new node at the beginning
 * @head: cabecera
 * @n: entero
 * Return: new output of the element, or null if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nodo1;

nodo1 = malloc(sizeof(listint_t));
if (nodo1 == NULL)
{
return (NULL);
}
if (head == NULL)
{
return (NULL);
}
nodo1->n = n;
nodo1->next = *head;
*head = nodo1;
return (nodo1);
}
