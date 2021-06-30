#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - check the code for Holberton School students.
 *
 * Return: Always 0.
 *@src: sorce string
 *@dest: destination of lov
*/


char *_strcat(char *dest, char *src)
{

int len, j = 0;


len = 0;
while (dest[len++])
j++;

for (len = 0; src[len]; len++)
dest[j++] = src[len];

return (dest);
}
