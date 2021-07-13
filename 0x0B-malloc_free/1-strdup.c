#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>




/**
 *_strdup - check the code for Holberton School students.
 *
 *@str: returns a pointer to the duplicated string
 *
 * Return: Always 0.
 */


char *_strdup(char *str)
{

	char *p = NULL;
	int i = 0;
	int len = 0;

	if (str)
	{
	for (len = 0; str[len] != '\0'; len++)
		p = malloc((sizeof(char) * len) + 1);
	if (p == NULL)
		return (NULL);
	if (p)
	{
		for (i = 0; i <= len; i++)
		{
			p[i] = str[i];
	}
		p[len] = '\0';
	}
	}
		return (p);
}
