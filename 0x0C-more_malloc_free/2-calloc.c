#include <stdlib.h>
/**
 * *_calloc - function to call memory
 * @nmemb: entry
 * @size: size
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *cfd;

	if (nmemb == 0 || size == 0)
		return (NULL);
	cfd = malloc(nmemb * size);
	if (cfd == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(cfd + i) = 0;
	return ((void *)cfd);
}
