#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - prints buffer in hexa
 * @src: the address of memory to print
 * @dest: the size of the memory to print
 * @n : size
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{

unsigned int i;

for (i = 0; i < n; i++)
{

dest[i] = src[i];

}
return (dest);
}
