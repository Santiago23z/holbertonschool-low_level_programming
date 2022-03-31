#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: Node
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
printf("%i\n", h->n);
h = h->next;
count++;
}
return (count);
}
