#include <sys/stat.h>
#include <sys/types.h>
#include <stddef.h>
#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>



/**
 * create_file - function that creates a file.
 * @filename: Pointer to file
 * @text_content: Content to insert in the file
 *
 * Description: Create a new file with the given content
 * Return: 1 Success or -1 Fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int cont = 0;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	fd = open(filename, O_CREAT | O_RDWR, 0600);
	if  (fd == -1)
		return (-1);

	while (text_content[cont] != '\0')
	{
		cont++;
	}
	if ((write(fd, text_content, cont)) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
