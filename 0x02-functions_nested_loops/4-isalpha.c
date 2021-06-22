#include "holberton.h"
#include <stdio.h>

/**
 * _isalpha - check the code for Holberton School students.
 *
 *@c: Always 0.
 *Return: Always 0
*/

int _isalpha(int c)
{

if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return (1);
else
return (0);
}
