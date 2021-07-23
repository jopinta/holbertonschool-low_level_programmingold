#include <stdlib.h>
#include "variadic_functions.h"

/**
 *sum_them_all - addition returns the sum
 *
 *@n: constatnt
 *
 *Return : suma
 */

int sum_them_all(const unsigned int n, ...)
{

	unsigned int sum = 0, i = 0;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
