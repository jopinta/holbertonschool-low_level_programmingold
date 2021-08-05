#include "main.c"

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

        if (b == NULL)
		return (0);

	for (i = 0; i < b; i++)
		;
	if  (b[i] != '0' || b[i] != '1')
		return (NULL);
	else
	{ return (1)
	}
}
