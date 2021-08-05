#include "main.h"

/**
 *get_bit -  returns the value of a bit at a given index.
 *@n: number to  string
 *@index: starting from 0 of the bit you want to get
 *
 *Return: the value of the bit at index
 */


int get_bit(unsigned long int n, unsigned int index)
{

	unsigned int length = sizeof(n) * 8;

	if (index > length)
		return (-1);

	n = n >> index;
	return (n & 1);
}
