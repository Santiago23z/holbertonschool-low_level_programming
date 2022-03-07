#include <stdlib.h>
#include "main.h"
/**
 * _strdup - this is main funtion
 * @str: this is char funtion
 * Return: 0
 */
char *_strdup(char *str)
{
char *l;
int i, r = 0;

if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;

l = malloc(sizeof(char) * (i + 1));
if (l == NULL)
return (NULL);

for (r = 0; str[r]; r++)
l[r] = str[r];

return (l);
free(l);
}
