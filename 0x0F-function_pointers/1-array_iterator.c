#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - fun that exec a fun given as param on each elem of an aray
 *
 *@array: element to print
 *@size: sixe of arraa
 *@action: name of the functon
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

if (action && array && size)
{
	for (i = 0; i < size; i++)
		action(array[i]);
}
}
