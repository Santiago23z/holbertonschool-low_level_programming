#include "lists.h"
#include <string.h>

/**
 * add_node - añade nuevo nodo en el comienzo de la lista
 * @head: beginning de la lista
 * @str: cadena a ser duplicada
 * Return: la direccion del nuevo elemento
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->len = strlen(str);
new->next = *head;
*head = new;
return (new);
}
