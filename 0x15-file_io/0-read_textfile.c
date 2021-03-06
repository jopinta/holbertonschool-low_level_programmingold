#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 *read_textfile -  reads a text file and prints it
 *@filename: file name
 *@letters: to read
 *
 *Return: the actual number of letters it could read and print
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes = 0;

	ssize_t ret = 0;
	char *buff;


	if (!filename)
		return (0);

	filedes = open(filename, O_RDONLY);
	if (filedes < 0)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	ret = read(filedes, buff, letters);
	if (ret < 0)
		return (0);

	ret = write(STDOUT_FILENO, buff, ret);
	if (ret < 0)
		return (0);
	free(buff);
	close(filedes);
	return (ret);
}
