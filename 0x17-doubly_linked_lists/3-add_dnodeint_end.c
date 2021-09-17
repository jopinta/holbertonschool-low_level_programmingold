#include "lists.h"

/**
 * add_dnodeint_end - check the doublelist
 *@head: ** to node's head
 *@n: data that is inside the node
 *
 * Return: the new node
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nodo_tmp, *nuevo_nodo;

	if (head == NULL)
		return (NULL);

	nuevo_nodo = malloc(sizeof(dlistint_t));
	if (nuevo_nodo == NULL)
		return (NULL);
	nuevo_nodo->n = n;
nuevo_nodo->next = NULL;


	nodo_tmp = *head;

	if (*head == NULL)
	{
		*head = nuevo_nodo;
		nuevo_nodo->prev = NULL;
		return (nuevo_nodo);
	}

	while (nodo_tmp->next != NULL)
	{
		nodo_tmp = nodo_tmp->next;
	}

	nodo_tmp->next = nuevo_nodo;
	nuevo_nodo->prev = nodo_tmp;

	return (nuevo_nodo);
}
