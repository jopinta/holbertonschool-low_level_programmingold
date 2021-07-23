#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print parameteers
 *@separator: sep of paramet
 *@n: number of param
 *@...: parameters value
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lista;
unsigned int i = 0;

va_start(lista, n);
for (i = 0; i < n; i++)
{
	printf("%d", va_arg(list, int));

	if (i < n - 1 && separator != NULL)
		printf("%s", separator);
}
printf("\n");
va_end(up);
}
