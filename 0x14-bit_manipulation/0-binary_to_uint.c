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



	for (i = 0; i < b; i++)
		;
	if  (b[i] != '0' || b[i] != '1')
		return (NULL);
else
	{
		converted <<= 1;
		if (b[i] == '1')return (1)
					num += 1;
	}
	return (converted)
}
