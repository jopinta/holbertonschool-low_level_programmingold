#include "main.h"

/**
 *clear_bit - at sets the value of a bit to 0 at a given index
 *@n: ptr num
 *@index: starting from 0 of the bit you want to set
 *
 *Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int length = sizeof((*n)) * 8;
	unsingned long int i = 1;

	if (index > length)
		return (-1);

	i = ~(i << index);

	*n = *n & i;

	return (1);
}
