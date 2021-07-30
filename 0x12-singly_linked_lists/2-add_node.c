#include "lists.h"
#include <string.h>
/**
 * add_node - function that add a new node at the beginning
 * @head: pointer to the struct
 * @str: element to add on this new node
 * Return: the number of nodes
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *nodoptr;
	int i = 0;

	if (!str)
		return (NULL);
	nodoptr = malloc(sizeof(list_t));

	if (nodoptr)
	{
		nodoptr->str = strdup(str);
		if (!nodoptr->str)
		{
			free(nodoptr);
			return (NULL);
		}
		while (nodoptr->str[i])
			i++;
		nodoptr->len = i;
		nodoptr->next = *head;
		*head = nodoptr;


	return (nodoptr);
}
	return (NULL);
}
