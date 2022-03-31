#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - una funcion que añade un nodo
 * @head: entrada
 * @str: entrada
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
int s, count = 0;
list_t *new;
list_t *temp;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
for (s = 0; str[s] != '\0'; s++)
count++;
new->len = s;
new->str = strdup(str);
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}
temp = *head;

while (temp->next != NULL)
temp = temp->next;

temp->next = new;

return (new);
}


/* list_t *new;
	list_t *last = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (new); */