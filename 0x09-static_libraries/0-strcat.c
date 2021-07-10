#include "holberton.h"
#include <stdio.h>

/**
 ** _strcat- check the code for Holberton School students.
 *@dest: ki
 *@src: lo
 * Return: (i).
 */
char *_strcat(char *dest, char *src)
{
  char *i = dest;


  for (; *i != '\0'; i++)
    {
    }
  for (; *src != '\0'; src++)
    {
      *i = *src;
      i++;
    }
  *i = '\0';
  return (dest);
}
