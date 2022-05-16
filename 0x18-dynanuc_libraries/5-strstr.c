# include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: - string
 * @needle: first ocurrense
 *
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{

	while (*haystack)
	{

		char *i = haystack;
		char *j = needle;
		{
			while (*haystack && *j && *haystack == *j)
			{
				haystack++;
				j++;
			}
			if (!*j)
				return (i);

			haystack = i + 1;
		}
	}
	return (0);

}
