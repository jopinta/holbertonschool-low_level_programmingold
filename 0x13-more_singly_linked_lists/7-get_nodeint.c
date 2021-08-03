#include "lists.h"

/**
 *get_nodeint_at_index - returns the xth node
 *@head: linked list
 *@index: inex's node
 *Return: nth node fron the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

for (i = 0; i < index; i++)
{
	head = head->next;
	if (head == NULL)
		return (NULL);
}
return (head);
}
