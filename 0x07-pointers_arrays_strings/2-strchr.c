#include "holberton.h"
#include <stdio.h>

/**
 * _strchr -  locates a character in a string.
 *
 * Return: Always 0.
 *@s: ptr
 *@c: char
*/

char *_strchr(char *s, char c)
{
while (s)
{
if (s[0] == c || s[0] == '\0')
{
return (s);
}
s++;
}
return ('\0');
}
