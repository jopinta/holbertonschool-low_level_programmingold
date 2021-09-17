#include "lists.h"

/**
 *sum_dlistint - summma of all node s data
 *@head: head of list
 *
 *Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (!head)
		return (0);


	while (head)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}
