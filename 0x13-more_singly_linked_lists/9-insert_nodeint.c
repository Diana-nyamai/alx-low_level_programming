#include "lists.h"

/**
 * insert_nodeint_at_index - entry point
 * @head: input
 * @idx: input
 * @n: input
 * Return: new node at a specific index
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *currentnode = *head, *prevnode = NULL, *newnode;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	for (i = 0; i < idx && currentnode != NULL; i++)
	{
		prevnode = currentnode;
		currentnode = currentnode->next;
	}
	if (i < idx)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = currentnode;
	if (prevnode == NULL)
		*head = newnode;
	else
		prevnode->next = newnode;

	return (newnode);
}
