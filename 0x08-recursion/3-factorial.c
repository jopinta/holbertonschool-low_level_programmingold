#include "holberton.h"
#include <stdio.h>

/**
 * factorial - factorial of a given number.
 *
 * Return: Always 0.
 *
 *@n: size
*/


int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
			}
