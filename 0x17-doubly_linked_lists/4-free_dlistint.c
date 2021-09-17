#include "lists.h"


/**
 *free_dlistint - free willy
 *@head: head o list
 *
 *Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nodo_tmp = NULL;

	while (head)
	{
		nodo_tmp = head->next;
		free(head);
		head = nodo_tmp;
	}
}
