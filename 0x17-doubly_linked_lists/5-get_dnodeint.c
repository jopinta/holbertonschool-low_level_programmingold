#include "lists.h"

/**
 *get_dnodeint_at_index - function thatget node at index
 *@head: head of list
 *@index: index of list
 *
 *Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nodo_tmp = head;
	unsigned int i = 0;


	while ((i < index) && nodo_tmp)
	{
		nodo_tmp = nodo_tmp->next;
		i++;
	}
	return (nodo_tmp);
}
