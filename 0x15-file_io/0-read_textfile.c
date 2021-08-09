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
ssize_t imp = 0;
	ssize_t ret = 0;
	char *buff = malloc(sizeof(char) * letters);

	if (!filename)
{
	return (0);
}

filedes = open(filename, O_RDONLY);
if (filedes == -1)
{
	return (-1);
}

imp = read(filedes, buff, letters);
if (imp != -1)
{
	ret = write(1, buff, letters);
	if (ret == -1)
	{
		return (-1);
	}
}
close(filedes);
return (ret);
}
