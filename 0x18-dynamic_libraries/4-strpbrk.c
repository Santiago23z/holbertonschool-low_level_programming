# include "main.h"

/**
 * _strpbrk - string for any of a set of bytes
 * @s: the first ocurrense in the string
 * @accept: that matches
 *
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;
	int i, j;

	while ((i = *s++) != 0)
	{
		for (p = accept; (j = *p++) != '\0';)
			if (j == i)
				return ((char *)(s - 1));
	}
	return (0);
}
