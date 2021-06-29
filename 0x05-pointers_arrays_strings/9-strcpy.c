#include "holberton.h"
#include "2-strlen.c"

/**
 * _strcpy - check the code for Holberton School students.
 *
 * Return: Always 0.
 *@dest: destination of love
 *@src: source
*/


char *_strcpy(char *dest, char *src)
{

int i, n = _strlen(src);

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
