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

  int len, j;
  

  len = 0;
  while (src[len] != '\0')
    {
      ++len;
    }
  for (j = 0; dest[j] != '\0'; j++)
    {
      dest = src;
      
    }
  dest[j] = '\0';
   
  return (dest);
}
