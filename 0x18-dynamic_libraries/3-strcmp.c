#include "holberton.h"

/**
 * _strcmp - Entry point
 * @s2: wopa
 * @s1: woopa
 *
 * Description: Show a message blablabla
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
int count = 0;

while (s1[count] == s2[count])
{
count++;
if (s1[count] == '\0' && s2[count] == '\0')
break;
}

return (s1[count] - s2[count]);
}
