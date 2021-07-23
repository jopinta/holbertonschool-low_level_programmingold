#include <stdlib.h>
#include "variadic_functions.h"

/**
*sum_them_all - addition returns the sum of all its parameters.
*
*@n: constante
*
*Return: always suma
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int suma = 0, i = 0;
	va_list sum;

	va_start(sum, n);
	for (i = 0; i < n; i++)
	{
		suma += va_arg(sum, int);
	}
	va_end(sum);
	return (suma);
}
