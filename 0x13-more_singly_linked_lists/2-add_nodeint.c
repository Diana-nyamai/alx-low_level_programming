#include "lists.h"

/**
* add_nodeint - entry point
* @head: input
* @n: input
* Return: 0
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (!head)
		return (NULL);

	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
