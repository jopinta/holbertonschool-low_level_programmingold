#include "holberton.h"

/**
 * _isalpha - check alphabetic character.
 *@c: number to work
 * Return: Always 0.
 */

int _isalpha(int c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
      return (1);
    }
  return (0);
}
