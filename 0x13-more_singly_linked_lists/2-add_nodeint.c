#include "lists.h"

/**
 * add_nodeint - add node.
 * @head: pointer to the struct.
 * @n: element to add on the new node
 *
 * Return: nodo numbers
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodo;

		nodo = malloc(sizeof(listint_t));
	if (nodo)
	{
		nodo->n = n;
		nodo->next = *head;
		*head = nodo;
		return (nodo);
}
	free(nodo);
	return (NULL);
}
