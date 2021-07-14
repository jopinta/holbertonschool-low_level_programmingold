#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code for Holberton School students.
 *
 * Return: Always 0.
 *
 *@s1: string one
 *@s2: sting two
*/

char *str_concat(char *s1, char *s2)
{
	char *p = NULL;
	int i = 0;
	int l1, l2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
		for (l2 = 0; s2[l2]; l2++)
			p = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!p)

		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		p[l1 + i] = s2[i];
	p[l1 + l2] = '\0';
return (p);
		}
