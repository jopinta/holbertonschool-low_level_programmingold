#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - check whether c (unsigned char) falls where.
 *@c: uppercase
 * Return: Always 0.
 */

int _isupper(int c)
{
  if (c >= 'A' && c <= 'Z')
    {
      return (1);
    }
  return (0);
}
