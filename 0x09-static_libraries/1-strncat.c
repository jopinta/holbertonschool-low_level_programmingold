#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - Str
 * @dest: dest
 * @src: src
 * @n: num
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
  int z;
  int x;

  z = x = 0;
  while (dest[z] != '\0')
    z += 1;
  while (x < n && src[x] != '\0')
    {
      dest[z] = src[x];
      x += 1;
      z += 1;
    }
  return (dest);
}
