#include "lists.h"

/**
 *print_dlistint - print doubly list
 *@h: lista paaa printear head of
 *
 *
 *Return: how many nodes are inside the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;


	if (!h)
		return (nodes);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
