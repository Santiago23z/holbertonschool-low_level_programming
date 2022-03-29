#include "lists.h"
#include <stdio.h>

/**
 * print_list - imprima todos los elementos de la lista_t
 * @h: Node to print
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
size_t g = 0;

while (h != NULL)
{
if (h->str != NULL)
printf("[%u] %s\n", h->len, h->str);
else
{
printf("[0] (nil)\n");
}
g++;
h = h->next;
}
return (g);
}
