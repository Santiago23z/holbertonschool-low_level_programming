#include "lists.h"
/**
<<<<<<< HEAD
 * list_len - function that returns the number
 * of elements in a linked list_t list
 * @h: entrada
=======
 * list_len - a function that returns the number
 *  of elements in a linked list_t list
 * @h: variable
>>>>>>> 31e3f94c331b430e455c32d85d140538213563d2
 * Return: 0
 */
size_t list_len(const list_t *h)
{
int count = 0;

<<<<<<< HEAD
if (h == NULL)
return (0);
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
=======
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next
	}
	return (count);
>>>>>>> 31e3f94c331b430e455c32d85d140538213563d2
}
