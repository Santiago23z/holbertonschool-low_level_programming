#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - una funcion que libere una lista_t.
 * @head: structura
 * Return: free
 */
void free_list(list_t *head)
{
if (head == NULL)
return;
if (head->next != NULL)
free_list(head->next);
free(head->str);
free(head);
}
