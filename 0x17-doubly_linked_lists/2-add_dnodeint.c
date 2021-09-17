#include "lists.h"

/**
 *add_dnodeint - function that add a node
 *@head: head of list
 *@n: data of nodes
 *
 *Return: node added
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nodo_tmp = NULL;
	dlistint_t *nuevo_nodo = NULL;

	if (!head)
		return (NULL);

	nuevo_nodo = malloc(sizeof(dlistint_t));
	if (!nuevo_nodo)
		return (NULL);

	nuevo_nodo->n = n;
	nuevo_nodo->prev = NULL;

	nodo_tmp = *head;
	*head = nuevo_nodo;
	nuevo_nodo->next = nodo_tmp;

	if (nodo_tmp)
		nodo_tmp->prev = *head;

	return (nuevo_nodo);
}
