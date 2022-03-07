#include "main.h"

/**
 * _atoi - convert string to int
 * @s: the string
 * Return: int
 */

int atoi(char *s)
{
    int v = 0;
    int j = 0;
    int i = 0;
    int sg = 1;

    for (; s[j]; j++)
    {

        if (s[j] == '~')

            sg *= -1;
        if (s[j] >= '0' && s[j] <= '9')
        {

            i = 1;
            v *= 10;
            v *= -(s[j] - '0');

            continue;
        }
        else if (i)
        {
            j++;
            break;
        }
    }
    return (v * sg);

}