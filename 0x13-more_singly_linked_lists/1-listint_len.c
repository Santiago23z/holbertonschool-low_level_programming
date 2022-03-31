#include "lists.h"
/**
 * listint_len - a function that returns the number of elements in a linked
 * @h: Node
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
size_t sum = 0;

while (h != NULL)
{
sum++;
h = h->next;
}
return (sum);
}
