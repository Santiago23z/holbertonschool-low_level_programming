#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/*
 *list_len - counts number of elements in a linked list
 *@h: list of elements to count
 *Return: Number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
int count = 0;
if (h == NULL)
return (0);
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
