#include <stdlib.h>
#include"holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - check the code for Holberton School students.
 *
 * Return: Always 0.
 *@s1: string 1
 *@s2: string 2
 */

int _strcmp(char *s1, char *s2)
{

int i = 0;
if (s1[i] != '\0' && s2[i] != '\0')
while (s1 == s2 && s1[i] != '\0')
{
i++;

}
return (*s1 - *s2);

}
