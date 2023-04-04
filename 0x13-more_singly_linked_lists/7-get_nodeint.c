#include "lists.h"

/**
 * get_nodeint_at_index - entry point
 * @head: input
 * @index: input
 * Return: 0
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node = head;

	for (i = 0; node != NULL && i < 5; i++)
	{
		node = node->next;
	}

	if (node != NULL && i == index)
	{
		return (node);
	}
	else
	{
		return (NULL);
	}
}
