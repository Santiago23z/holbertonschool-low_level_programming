# include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: bytes in the initial segement of s
 * @accept: bytes of accept
 *
 * Return: only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0, index;

	for (len = 0; s[len]; len++)
	{
		for (index = 0; accept[index]; index++)
		{
			if (s[len] == accept[index])

				break;
		}
		if  (!accept[index])

			break;
	}
	return (len);
}
