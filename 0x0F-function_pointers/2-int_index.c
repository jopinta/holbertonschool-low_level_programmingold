#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - check if a number is equal to 98
 *@array: element to print in cmp fun
 *@size: of array
 *@cmp: name of function
 * Return: to index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
