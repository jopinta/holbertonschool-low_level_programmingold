#include "lists.h"


/**
 *add_node_end - function that creates and add a node at he end
 *
 *@head: pontier to pinter head list_t
 *@str: str needs to be duplicated
 *
 *Return: he address of the new element
 *
 */



list_t *add_node_end(list_t **head, const char *str)

{
	list_t *nodo;
	list_t *prev;
	int i = 0;

	if (!(head && str))
	return (NULL);

	    nodo = malloc(sizeof(list_t));

if (!nodo)
return (NULL);
nodo->str = strdup(str);
for (i = 0; str[i]; i++)
	;
	    nodo->len = i;
	    nodo->next = NULL;

if (!*head)
{
*head = nodo;
return (nodo);
}
prev = *head;
while (prev->next)
{
prev = prev->next;
}
prev->next = nodo;
return (nodo);

}
