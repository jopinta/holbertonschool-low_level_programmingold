#include "lists.h"
#include <stdio.h>

/**
 *list_len - largo de l lista
 *
 *@h: lista+ ntera
 *
 *Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nodo = 0;

	while (h)
	{
		nodo++;
		h = h->next;
	}
	return (nodo);
}
