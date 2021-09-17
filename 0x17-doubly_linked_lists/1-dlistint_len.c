#include "lists.h"

/**
 *dlistint_len -largo de la lista
 *@h: head of list
 *
 *Return: always length
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
