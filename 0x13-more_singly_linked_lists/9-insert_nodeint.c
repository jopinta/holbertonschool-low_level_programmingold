#include "lists.h"

/**
 *insert_nodeint_at_index - in any position
 *@head: list linkeada
 *@idx: position
 *@n: nodo 2 insert
 *
 *Return: &nodo
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nodo;
	listint_t *aux;
	unsigned int i;

	nodo = malloc(sizeof(listint_t));

	if (nodo)
	{
		nodo->n = n;

		if (idx == 0)

		{
			nodo->next = *head;
			*head = nodo;
			return (nodo);
		}

		aux = *head;
		while (aux != NULL && i < idx -1)
		{
			i++;
			aux = aux->next;
		}
		if (i == idx -1 && aux != NULL)
		{
		nodo->next = aux->next;
		aux->next = nodo;
		return (nodo);
		}
			}
			free(nodo);
			return (NULL);
			}