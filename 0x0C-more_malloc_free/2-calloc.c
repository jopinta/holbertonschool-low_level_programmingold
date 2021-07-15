#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *lolita;
	unsigned int i;

	if (nmemb == '\0' && size == '\0')
		return (NULL);

	lolita = malloc(nmemb * size);
		if (!lolita)
			return (NULL);
			for (i = 0; i < (nmemb * size); i++)
				     lolita[i] = 0;
	return (lolita);
}
