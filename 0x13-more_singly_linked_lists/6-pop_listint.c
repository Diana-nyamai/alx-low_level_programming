#include "lists.h"

/**
* pop_listint - entry point
* @head: input
* Return: 0
*/
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int value;

	if (*head == NULL)
		return (0);
	value = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (value);
}
