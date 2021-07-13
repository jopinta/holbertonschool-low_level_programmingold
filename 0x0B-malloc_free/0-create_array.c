#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *create_array - fun a la que se le pasa un
 *Return:  nuul si es 0 a pointer to this place
 *@size: unsigned int
 *@c: charc (valor)
 */

char *create_array(unsigned int size, char c)

{

	char *ptr = NULL;
	unsigned int i = 0;


	if (size > 0)
	{
		ptr = malloc(sizeof(char) * size);
	if (ptr)
	{
		for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	}
	}
	return (ptr);

	}
