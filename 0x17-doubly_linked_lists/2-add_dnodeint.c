#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of list
 * @head: double pointer to head of node
 * @n: node data
 * Return: a new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t nd;

    nd = malloc(sizeof(dlistint_t));
    if (nd == NULL)
        return (NULL);

    nd->n = n;
    nd->prev = NULL;
    nd->next = head;
    if (head != NULL)
    (*head)->prev = nd;
    *head = nd;
    return (nd);
}
