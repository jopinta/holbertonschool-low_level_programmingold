#include "lists.h"

/**
 *free_list - free the memory spaces of head list
 *@head: liked list
 *
 *
 *
 */

void free_list(list_t *head)
{

	list_t *nodo;

	while (head)
	{
		nodo = head;
		head = head->next;
		free(nodo->str);
		free(nodo);
	}
}
