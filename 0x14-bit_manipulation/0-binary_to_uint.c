#include "main.h"

/**
 *binary_to_uint -  converts a binary number to an unsigned int.
 *@b: ointing to a string of 0 and 1 chars
 *
 *
 *Return: the converted number, or 0
 *
 *
 */


unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int converted;

	if (!b)
		return (0);
	while (b[i])
	{
		if  (b[i] != '0' && b[i] != '1')
			return (0);
	converted <<= 1;
		if (b[i] == '1')
			converted += 1;
		i++;
	}
	return (converted);
}
