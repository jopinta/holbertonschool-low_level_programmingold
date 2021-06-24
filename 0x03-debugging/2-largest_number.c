#include "holberton.h"
#include <stdio.h>
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && c == 0)
    {
        largest = a;
    }
    else if (b >= 0 && a > c)
    {
        largest = a;
    
    }

    return (largest);
}
