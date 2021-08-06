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
	int i;
	unsigned int n = 0, m = 1;

	if (b)
	{
	for (i = 0; b[i] != '\0'; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		if  (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			n += m;
		m *= 2;
	}
	return (n);
}
	return (0);
}
