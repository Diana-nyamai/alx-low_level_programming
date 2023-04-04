#include "lists.h"

/**
* delete_nodeint_at_index - entry point
* @head: input
* @index: input
* Return: 0
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentnode = *head, *prevnode = NULL, *tmp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (i = 0; i < index && currentnode != NULL; i++)
	{
		prevnode = currentnode;
		currentnode = currentnode->next;
	}
	if (i != index)
		return (-1);
	prevnode->next = currentnode->next;
	free(currentnode);
	return (1);
}
