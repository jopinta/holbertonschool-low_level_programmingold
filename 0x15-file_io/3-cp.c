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
	int file_from, file_to;
	char buff[1024];
	int cont = 0;

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
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
				exit(99);
		}
		while ((cont = read(file_from, buff, sizeof(buff))) > 0)
			if (write(file_to, buff, cont) != cont)
			{
			dprintf(2, "Error: Can't write to %s", argv[2]);
			exit(99);
			}

		if (cont == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		close(file_from);
		close(file_to);
		return (0);
}
