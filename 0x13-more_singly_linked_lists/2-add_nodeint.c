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

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
