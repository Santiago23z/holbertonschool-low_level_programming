#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of multiplication or 1
 */
 #include <stdio.h>
#include <stdlib.h>

/**
* main - print the number
* @argc: size of argv
* @argv: program
* Return: 0
*/

int main(int argc, char *argv[])
{
int s;

if (argc == 3)
{
s = atoi(argv[1]) * atoi(argv[2]);
printf("%i\n", s);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
