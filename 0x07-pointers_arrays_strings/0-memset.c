#include "holberton.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: the address of memory to print
 * @b: the size of the memory to print
 *
 *@n: sixw does matter
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i = 0;

while (i < n)
{
s[i] = b;

i++;
}
return (s);
}
