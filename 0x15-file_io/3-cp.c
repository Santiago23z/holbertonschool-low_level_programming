#include "main.h"
/**
* main - program that copies the content of a file to another file
* @ac: numero de argumentos
* @av: arreglo de argumentos
* Return: 0 if success, -1 if it fails
*/
int main(int ac, char **av)
{
	int file, file2, path, end, end2;
	char buffer[BUFSIZ];

	if (ac != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	file = open(av[1], O_RDONLY);
	if (file == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98);
	}
	path = read(file, buffer, BUFSIZ);
	file2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (path > 0)
	{
	if (file2 == -1 || write(file2, buffer, path) != path)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
	exit(99);
	}
	}
	if (path == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98);
	}
	end = close(file);
	end2 = close(file2);
	if (end == -1 || end2 == -1)
	{
	if (end == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file);
	if (end2 == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file2);
	exit(100);
	}
	return (0);
}
