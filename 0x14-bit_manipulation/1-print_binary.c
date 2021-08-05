#include "main.h"

/**
 *print_binary -  prints the binary representation of a number.
 *@n: string unsigned long int
 *
 *Returns: void
 *
 */

void print_binary(unsigned long int n)
{
	int i = 0;
int j = 0;
	int x = 0;


if (n == 0)
{
	_putchar('0');
}
for (i = 63; i >= 0; i--)
{
	j = n >> i;
	if (j & 1)
		x = 1;
	_putchar('1');
}
if (x == 1)
	_putchar('0');
}
