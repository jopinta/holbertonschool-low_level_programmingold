#include "holberton.h"
/**
 *_strpbrk - search a string for any of a set of bytes.
 *
 *
 *@s: str
 *@accept: str 2
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
int i, j, flag = 0;
char *x = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0 ; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
x = &s[i];
flag = 1;
break;
}
}
if (flag)
break;
}
return (x);
}
