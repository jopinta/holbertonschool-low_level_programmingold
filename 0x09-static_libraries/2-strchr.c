#include "holberton.h"

/**
 *_strchr - string scanning operation.
 *@s: src
 *@c: dst
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
  for (; 1; s++)
    {
      if (s[0] == c)
	break;
      else if (s[0] == '\0')

	return (0);
    }
  return (s);
}
