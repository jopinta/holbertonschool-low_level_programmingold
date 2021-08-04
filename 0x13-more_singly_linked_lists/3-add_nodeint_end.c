#include "lists.h"

/**
 *add_nodeint_end - add node at the end
 *@head: struct with th elinked list.
 *@n: int to copy
 *Return: address of hte new element.
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodoend;
	listint_t *nodo;

	nodo = malloc(sizeof(listint_t));

	if (nodo)
	{
		nodo->n = n;
		nodo->next = NULL;

		if (*head == NULL)
		{
			*head = nodo;
			return (nodo);
		}
		nodoend = *head;

		while (nodoend->next != NULL)
		nodoend = nodoend->next;
		nodoend->next = nodo;
		return (nodo);
	}
	free(nodo);
	return (NULL);
}
