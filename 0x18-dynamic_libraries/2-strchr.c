# include "main.h"
# include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string to be checked
 * @c: character to be checked
 *
 * Return: pointer to the firs ocurrence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)

			return (s);

		s++;
	}
	if (c == '\0')

		return (s);

	return (NULL);
}
