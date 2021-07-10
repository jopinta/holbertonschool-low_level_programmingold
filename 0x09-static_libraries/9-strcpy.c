#include "holberton.h"
#include "2-strlen.c"
/**
 * _strcpy - ul
 * @dest: des
 * @src: src
 *
 * Description: Copy a string from source to destination
 * Return: string destination
 */
char *_strcpy(char *dest, char *src)
{
  int i = 0, len = _strlen(src);

  for (i = 0 ; i <= len ; i++)
    {
      dest[i] = src[i];
    }
  return (dest);
 }
