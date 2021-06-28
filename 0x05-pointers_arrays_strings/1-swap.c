#include "holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 *
 *
 *@a: algo son
 *@b: losparametros
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{

int t;

t = *b;
*b = *a;
*a = t;
}
