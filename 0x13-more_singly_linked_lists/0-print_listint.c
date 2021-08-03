#include "lists.h"

/**
 *print_listint - print elements
 *@h: ptr to struct
 *
 *Return: nu,mbre of noodls
 */

size_t print_listint(const listint_t *h)
{

	size_t nodo = 0;

	while (h)
	{
		printf("%i\n", h->n);
		nodo++;
		h = h->next;
	}
	return (nodo);
}
