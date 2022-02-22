#include "main.h"
/**
 * rev_string - this is the main
 * @s: this is a S funtion
 */
void rev_string(char *s)
{
	char r = s[0];
	int t = 0;
	int i;

	while (s[t] != '\0')
	t++;
	for (i = 0; i < t; i++)
{
	t--;
	r = s[i];
	s[i] = s[t];
	s[t] = r;
