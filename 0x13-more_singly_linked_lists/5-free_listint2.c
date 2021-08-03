#include "lists.h"

/**
 *free_listint2 - free list and set head 2 null
 *@head: linked list to break free
 *
 */

void free_listint2(listint_t **head)
{

	listint_t *nodo;

	if(!head)
		return;

	while (*head)
	{
		nodo = *head;
		*head = (*head)->next;
		free(nodo);
	}
	*head = (NULL);
}
