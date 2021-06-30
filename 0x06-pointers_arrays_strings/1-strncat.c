#include "holberton.h"
#include <string.h>

/**
 * _strncat - check the code for Holberton School students.
 *
 * Return: Always 0.
 *@dest: destination
 *@src: source
 *@n: size?
*/


char *_strncat(char *dest, char *src, int n)
{
size_t dest_len = strlen(dest);
int i;

for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';

return (dest);
}
