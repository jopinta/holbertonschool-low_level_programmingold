#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - test whether c is a char clas digit
 *@c:c argument is an int (unsigned char)
 * Return: Always 0.
 */
int _isdigit(int c)
{

  if (c >= '0' && c <= '9')
    {
      return (1);
    }
  return (0);
}
