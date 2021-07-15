#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - check the code for Holberton School students.
 *
 * Return: Always 0.
 *@s1: string one
 *@s2: stringggtwo
 *@n: n bytes asked
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *britney = NULL;
	 unsigned int i;
	 int j;


	for (i = 0; s2[i] != '\0'; i++)
		if (n >= i)
			n = n + 1;

	for (j = 0; s1[j] != '\0'; j++)

		britney = malloc(sizeof(char) * j + n + 1);
	if (!britney)
	{
		return (NULL);

}
	return (britney);
}
