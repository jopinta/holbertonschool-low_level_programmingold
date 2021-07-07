#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - the value of x raised to the power of y.
 *
 * Return: Always 0.
 *@x: xes
 *@y: yes
*/

int _pow_recursion(int x, int y)
{


	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x *  _pow_recursion(x, y - 1));
}
