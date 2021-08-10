#include "main.h"
/**
 *main - Entry point
 *@argc: name of the program
 *@argv: argument vector
 *
 *Return: bytes read
 */

int main(int argc, char **argv)
{
	int file_from, file_to, i, j;
	char buff[1024];
	ssize_t cont;

		if (argc != 3)
		{
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
		}
		file_from = open(argv[1], O_RDONLY);
		if (file_from == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
		}
		file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (file_to == -1)
		{
			i = close(file_from);
			if (i == -1)
			{
				dprintf(2, "Error: Can't close fd %i", file_from);
				exit(100);
			}
			exit(98);
		}
		while ((cont = read(file_from, buff, sizeof(buff))) != 0)
		{
			j = write(file_to, buff, cont);
		if (j == -1)
		{
			dprintf(2, "Error: Can't write to %s", argv[2]);
			exit(99);
		}
			}
	return (0);
}
