#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
    
		char *r = haystack;
		char *c = needle;

		while (*r == *c && *c != '\0')
		{
			r++;
			c++;
		}

		if (*c == '\0')
			return (haystack);
	}

	return ('\0');
}
