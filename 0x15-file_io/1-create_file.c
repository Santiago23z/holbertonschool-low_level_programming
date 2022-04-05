#include "main.h"
/**
 * create_file - unction that creates a file.
 * @filename: pointer to name of the file
 * @text_content: pointer to string
 * Return: 1 on sucess, -1 
 */
int create_file(const char *filename, char *text_content)
{
int flopen;
int flwri;
int i;

if (filename == NULL)
return (-1);
flopen = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (flopen == -1)
return (-1);
if (text_content == NULL)
{
close(flopen);
return (1);
}
for (i = 0; text_content[i] != '\0'; i++)
flwri = write(flopen, text_content, i);
if (flwri == -1)
return (-1);
close(flopen);
return (1);
}